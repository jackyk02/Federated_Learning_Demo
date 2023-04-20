import os
import sys
sys.path.append(os.path.dirname(__file__))
# List imported names, but do not use pylint's --extension-pkg-allow-list option
# so that these names will be assumed present without having to compile and install.
# pylint: disable=no-name-in-module, import-error
from LinguaFrancaclient2 import (
    Tag, action_capsule_t, port_capsule, request_stop, schedule_copy, start
)
# pylint: disable=c-extension-no-member
import LinguaFrancaclient2 as lf
try:
    from LinguaFrancaBase.constants import BILLION, FOREVER, NEVER, instant_t, interval_t
    from LinguaFrancaBase.functions import (
        DAY, DAYS, HOUR, HOURS, MINUTE, MINUTES, MSEC, MSECS, NSEC, NSECS, SEC, SECS, USEC,
        USECS, WEEK, WEEKS
    )
    from LinguaFrancaBase.classes import Make
except ModuleNotFoundError:
    print("No module named 'LinguaFrancaBase'. "
          "Install using \"pip3 install LinguaFrancaBase\".")
    sys.exit(1)
import copy

# From the preamble, verbatim:
import torch
import torch.nn as nn
import torch.nn.functional as F
from torch.utils.data import DataLoader, random_split
from torchvision.datasets import CIFAR10
import torchvision.transforms as transforms
from collections import OrderedDict
from typing import List, Tuple
import numpy as np
import copy

DEVICE = torch.device("cpu")
# CIFAR-10 dataset loading and preprocessing
NUM_CLIENTS = 2
BATCH_SIZE = 32

def load_datasets():
    transform = transforms.Compose(
        [transforms.ToTensor(), transforms.Normalize((0.5, 0.5, 0.5), (0.5, 0.5, 0.5))]
    )
    trainset = CIFAR10("./dataset", train=True, download=True, transform=transform)
    testset = CIFAR10("./dataset", train=False, download=True, transform=transform)

    partition_size = len(trainset) // NUM_CLIENTS
    lengths = [partition_size] * NUM_CLIENTS
    datasets = random_split(trainset, lengths, torch.Generator().manual_seed(42))

    trainloaders = []
    valloaders = []
    for ds in datasets:
        len_val = len(ds) // 10
        len_train = len(ds) - len_val
        lengths = [len_train, len_val]
        ds_train, ds_val = random_split(ds, lengths, torch.Generator().manual_seed(42))
        trainloaders.append(DataLoader(ds_train, batch_size=BATCH_SIZE, shuffle=True))
        valloaders.append(DataLoader(ds_val, batch_size=BATCH_SIZE))
    testloader = DataLoader(testset, batch_size=BATCH_SIZE)
    return trainloaders, valloaders, testloader

trainloaders, valloaders, testloader = load_datasets()

# Neural network model
class Net(nn.Module):
    def __init__(self) -> None:
        super(Net, self).__init__()
        self.conv1 = nn.Conv2d(3, 6, 5)
        self.pool = nn.MaxPool2d(2, 2)
        self.conv2 = nn.Conv2d(6, 16, 5)
        self.fc1 = nn.Linear(16 * 5 * 5, 120)
        self.fc2 = nn.Linear(120, 84)
        self.fc3 = nn.Linear(84, 10)

    def forward(self, x: torch.Tensor) -> torch.Tensor:
        x = self.pool(F.relu(self.conv1(x)))
        x = self.pool(F.relu(self.conv2(x)))
        x = x.view(-1, 16 * 5 * 5)
        x = F.relu(self.fc1(x))
        x = F.relu(self.fc2(x))
        x = self.fc3(x)
        return x

# Training and evaluation functions
def train(net, dataloader, epochs):
    criterion = nn.CrossEntropyLoss()
    optimizer = torch.optim.SGD(net.parameters(), lr=0.001, momentum=0.9)

    for epoch in range(epochs):
        for i, (inputs, labels) in enumerate(dataloader, 0):
            inputs, labels = inputs.to(DEVICE), labels.to(DEVICE)

            optimizer.zero_grad()
            outputs = net(inputs)
            loss = criterion(outputs, labels)
            loss.backward()
            optimizer.step()

def test(net, dataloader):
    criterion = nn.CrossEntropyLoss()
    correct = 0
    total = 0
    running_loss = 0.0

    with torch.no_grad():
        for images, labels in dataloader:
            images, labels = images.to(DEVICE), labels.to(DEVICE)
            outputs = net(images)
            loss = criterion(outputs, labels)
            running_loss += loss.item()
            _, predicted = torch.max(outputs.data, 1)
            total += labels.size(0)
            correct += (predicted == labels).sum().item()

    accuracy = 100 * correct / total
    average_loss = running_loss / len(dataloader)
    return average_loss, accuracy

class Client():
    def __init__(self, net, trainloader, valloader):
        self.net = copy.deepcopy(net)
        self.trainloader = trainloader
        self.valloader = valloader

    def get_parameters(self):
        return self.get_parameters_from_net(self.net)

    @staticmethod
    def get_parameters_from_net(net) -> List[np.ndarray]:
        return [val.cpu().numpy() for _, val in net.state_dict().items()]

    def set_parameters(self, parameters: List[np.ndarray]):
        self.set_parameters_to_net(self.net, parameters)

    @staticmethod
    def set_parameters_to_net(net, parameters: List[np.ndarray]):
        params_dict = zip(net.state_dict().keys(), parameters)
        state_dict = OrderedDict({k: torch.Tensor(v) for k, v in params_dict})
        net.load_state_dict(state_dict, strict=True)

    def fit(self, parameters):
        self.set_parameters(parameters)
        train(self.net, self.trainloader, epochs=1)
        return self.get_parameters(), len(self.trainloader), {}

# End of preamble.
# From the preamble, verbatim:
import torch
import torch.nn as nn
import torch.nn.functional as F
from torch.utils.data import DataLoader, random_split
from torchvision.datasets import CIFAR10
import torchvision.transforms as transforms
from collections import OrderedDict
from typing import List, Tuple
import numpy as np
import copy

DEVICE = torch.device("cpu")
# CIFAR-10 dataset loading and preprocessing
NUM_CLIENTS = 2
BATCH_SIZE = 32

def load_datasets():
    transform = transforms.Compose(
        [transforms.ToTensor(), transforms.Normalize((0.5, 0.5, 0.5), (0.5, 0.5, 0.5))]
    )
    trainset = CIFAR10("./dataset", train=True, download=True, transform=transform)
    testset = CIFAR10("./dataset", train=False, download=True, transform=transform)

    partition_size = len(trainset) // NUM_CLIENTS
    lengths = [partition_size] * NUM_CLIENTS
    datasets = random_split(trainset, lengths, torch.Generator().manual_seed(42))

    trainloaders = []
    valloaders = []
    for ds in datasets:
        len_val = len(ds) // 10
        len_train = len(ds) - len_val
        lengths = [len_train, len_val]
        ds_train, ds_val = random_split(ds, lengths, torch.Generator().manual_seed(42))
        trainloaders.append(DataLoader(ds_train, batch_size=BATCH_SIZE, shuffle=True))
        valloaders.append(DataLoader(ds_val, batch_size=BATCH_SIZE))
    testloader = DataLoader(testset, batch_size=BATCH_SIZE)
    return trainloaders, valloaders, testloader

trainloaders, valloaders, testloader = load_datasets()

# Neural network model
class Net(nn.Module):
    def __init__(self) -> None:
        super(Net, self).__init__()
        self.conv1 = nn.Conv2d(3, 6, 5)
        self.pool = nn.MaxPool2d(2, 2)
        self.conv2 = nn.Conv2d(6, 16, 5)
        self.fc1 = nn.Linear(16 * 5 * 5, 120)
        self.fc2 = nn.Linear(120, 84)
        self.fc3 = nn.Linear(84, 10)

    def forward(self, x: torch.Tensor) -> torch.Tensor:
        x = self.pool(F.relu(self.conv1(x)))
        x = self.pool(F.relu(self.conv2(x)))
        x = x.view(-1, 16 * 5 * 5)
        x = F.relu(self.fc1(x))
        x = F.relu(self.fc2(x))
        x = self.fc3(x)
        return x

# Training and evaluation functions
def train(net, dataloader, epochs):
    criterion = nn.CrossEntropyLoss()
    optimizer = torch.optim.SGD(net.parameters(), lr=0.001, momentum=0.9)

    for epoch in range(epochs):
        for i, (inputs, labels) in enumerate(dataloader, 0):
            inputs, labels = inputs.to(DEVICE), labels.to(DEVICE)

            optimizer.zero_grad()
            outputs = net(inputs)
            loss = criterion(outputs, labels)
            loss.backward()
            optimizer.step()

def test(net, dataloader):
    criterion = nn.CrossEntropyLoss()
    correct = 0
    total = 0
    running_loss = 0.0

    with torch.no_grad():
        for images, labels in dataloader:
            images, labels = images.to(DEVICE), labels.to(DEVICE)
            outputs = net(images)
            loss = criterion(outputs, labels)
            running_loss += loss.item()
            _, predicted = torch.max(outputs.data, 1)
            total += labels.size(0)
            correct += (predicted == labels).sum().item()

    accuracy = 100 * correct / total
    average_loss = running_loss / len(dataloader)
    return average_loss, accuracy

class Client():
    def __init__(self, net, trainloader, valloader):
        self.net = copy.deepcopy(net)
        self.trainloader = trainloader
        self.valloader = valloader

    def get_parameters(self):
        return self.get_parameters_from_net(self.net)

    @staticmethod
    def get_parameters_from_net(net) -> List[np.ndarray]:
        return [val.cpu().numpy() for _, val in net.state_dict().items()]

    def set_parameters(self, parameters: List[np.ndarray]):
        self.set_parameters_to_net(self.net, parameters)

    @staticmethod
    def set_parameters_to_net(net, parameters: List[np.ndarray]):
        params_dict = zip(net.state_dict().keys(), parameters)
        state_dict = OrderedDict({k: torch.Tensor(v) for k, v in params_dict})
        net.load_state_dict(state_dict, strict=True)

    def fit(self, parameters):
        self.set_parameters(parameters)
        train(self.net, self.trainloader, epochs=1)
        return self.get_parameters(), len(self.trainloader), {}

# End of preamble.
# From the preamble, verbatim:
import torch
import torch.nn as nn
import torch.nn.functional as F
from torch.utils.data import DataLoader, random_split
from torchvision.datasets import CIFAR10
import torchvision.transforms as transforms
from collections import OrderedDict
from typing import List, Tuple
import numpy as np
import copy

DEVICE = torch.device("cpu")
# CIFAR-10 dataset loading and preprocessing
NUM_CLIENTS = 2
BATCH_SIZE = 32

def load_datasets():
    transform = transforms.Compose(
        [transforms.ToTensor(), transforms.Normalize((0.5, 0.5, 0.5), (0.5, 0.5, 0.5))]
    )
    trainset = CIFAR10("./dataset", train=True, download=True, transform=transform)
    testset = CIFAR10("./dataset", train=False, download=True, transform=transform)

    partition_size = len(trainset) // NUM_CLIENTS
    lengths = [partition_size] * NUM_CLIENTS
    datasets = random_split(trainset, lengths, torch.Generator().manual_seed(42))

    trainloaders = []
    valloaders = []
    for ds in datasets:
        len_val = len(ds) // 10
        len_train = len(ds) - len_val
        lengths = [len_train, len_val]
        ds_train, ds_val = random_split(ds, lengths, torch.Generator().manual_seed(42))
        trainloaders.append(DataLoader(ds_train, batch_size=BATCH_SIZE, shuffle=True))
        valloaders.append(DataLoader(ds_val, batch_size=BATCH_SIZE))
    testloader = DataLoader(testset, batch_size=BATCH_SIZE)
    return trainloaders, valloaders, testloader

trainloaders, valloaders, testloader = load_datasets()

# Neural network model
class Net(nn.Module):
    def __init__(self) -> None:
        super(Net, self).__init__()
        self.conv1 = nn.Conv2d(3, 6, 5)
        self.pool = nn.MaxPool2d(2, 2)
        self.conv2 = nn.Conv2d(6, 16, 5)
        self.fc1 = nn.Linear(16 * 5 * 5, 120)
        self.fc2 = nn.Linear(120, 84)
        self.fc3 = nn.Linear(84, 10)

    def forward(self, x: torch.Tensor) -> torch.Tensor:
        x = self.pool(F.relu(self.conv1(x)))
        x = self.pool(F.relu(self.conv2(x)))
        x = x.view(-1, 16 * 5 * 5)
        x = F.relu(self.fc1(x))
        x = F.relu(self.fc2(x))
        x = self.fc3(x)
        return x

# Training and evaluation functions
def train(net, dataloader, epochs):
    criterion = nn.CrossEntropyLoss()
    optimizer = torch.optim.SGD(net.parameters(), lr=0.001, momentum=0.9)

    for epoch in range(epochs):
        for i, (inputs, labels) in enumerate(dataloader, 0):
            inputs, labels = inputs.to(DEVICE), labels.to(DEVICE)

            optimizer.zero_grad()
            outputs = net(inputs)
            loss = criterion(outputs, labels)
            loss.backward()
            optimizer.step()

def test(net, dataloader):
    criterion = nn.CrossEntropyLoss()
    correct = 0
    total = 0
    running_loss = 0.0

    with torch.no_grad():
        for images, labels in dataloader:
            images, labels = images.to(DEVICE), labels.to(DEVICE)
            outputs = net(images)
            loss = criterion(outputs, labels)
            running_loss += loss.item()
            _, predicted = torch.max(outputs.data, 1)
            total += labels.size(0)
            correct += (predicted == labels).sum().item()

    accuracy = 100 * correct / total
    average_loss = running_loss / len(dataloader)
    return average_loss, accuracy

class Client():
    def __init__(self, net, trainloader, valloader):
        self.net = copy.deepcopy(net)
        self.trainloader = trainloader
        self.valloader = valloader

    def get_parameters(self):
        return self.get_parameters_from_net(self.net)

    @staticmethod
    def get_parameters_from_net(net) -> List[np.ndarray]:
        return [val.cpu().numpy() for _, val in net.state_dict().items()]

    def set_parameters(self, parameters: List[np.ndarray]):
        self.set_parameters_to_net(self.net, parameters)

    @staticmethod
    def set_parameters_to_net(net, parameters: List[np.ndarray]):
        params_dict = zip(net.state_dict().keys(), parameters)
        state_dict = OrderedDict({k: torch.Tensor(v) for k, v in params_dict})
        net.load_state_dict(state_dict, strict=True)

    def fit(self, parameters):
        self.set_parameters(parameters)
        train(self.net, self.trainloader, epochs=1)
        return self.get_parameters(), len(self.trainloader), {}

# End of preamble.
# From the preamble, verbatim:
import torch
import torch.nn as nn
import torch.nn.functional as F
from torch.utils.data import DataLoader, random_split
from torchvision.datasets import CIFAR10
import torchvision.transforms as transforms
from collections import OrderedDict
from typing import List, Tuple
import numpy as np
import copy

DEVICE = torch.device("cpu")
# CIFAR-10 dataset loading and preprocessing
NUM_CLIENTS = 2
BATCH_SIZE = 32

def load_datasets():
    transform = transforms.Compose(
        [transforms.ToTensor(), transforms.Normalize((0.5, 0.5, 0.5), (0.5, 0.5, 0.5))]
    )
    trainset = CIFAR10("./dataset", train=True, download=True, transform=transform)
    testset = CIFAR10("./dataset", train=False, download=True, transform=transform)

    partition_size = len(trainset) // NUM_CLIENTS
    lengths = [partition_size] * NUM_CLIENTS
    datasets = random_split(trainset, lengths, torch.Generator().manual_seed(42))

    trainloaders = []
    valloaders = []
    for ds in datasets:
        len_val = len(ds) // 10
        len_train = len(ds) - len_val
        lengths = [len_train, len_val]
        ds_train, ds_val = random_split(ds, lengths, torch.Generator().manual_seed(42))
        trainloaders.append(DataLoader(ds_train, batch_size=BATCH_SIZE, shuffle=True))
        valloaders.append(DataLoader(ds_val, batch_size=BATCH_SIZE))
    testloader = DataLoader(testset, batch_size=BATCH_SIZE)
    return trainloaders, valloaders, testloader

trainloaders, valloaders, testloader = load_datasets()

# Neural network model
class Net(nn.Module):
    def __init__(self) -> None:
        super(Net, self).__init__()
        self.conv1 = nn.Conv2d(3, 6, 5)
        self.pool = nn.MaxPool2d(2, 2)
        self.conv2 = nn.Conv2d(6, 16, 5)
        self.fc1 = nn.Linear(16 * 5 * 5, 120)
        self.fc2 = nn.Linear(120, 84)
        self.fc3 = nn.Linear(84, 10)

    def forward(self, x: torch.Tensor) -> torch.Tensor:
        x = self.pool(F.relu(self.conv1(x)))
        x = self.pool(F.relu(self.conv2(x)))
        x = x.view(-1, 16 * 5 * 5)
        x = F.relu(self.fc1(x))
        x = F.relu(self.fc2(x))
        x = self.fc3(x)
        return x

# Training and evaluation functions
def train(net, dataloader, epochs):
    criterion = nn.CrossEntropyLoss()
    optimizer = torch.optim.SGD(net.parameters(), lr=0.001, momentum=0.9)

    for epoch in range(epochs):
        for i, (inputs, labels) in enumerate(dataloader, 0):
            inputs, labels = inputs.to(DEVICE), labels.to(DEVICE)

            optimizer.zero_grad()
            outputs = net(inputs)
            loss = criterion(outputs, labels)
            loss.backward()
            optimizer.step()

def test(net, dataloader):
    criterion = nn.CrossEntropyLoss()
    correct = 0
    total = 0
    running_loss = 0.0

    with torch.no_grad():
        for images, labels in dataloader:
            images, labels = images.to(DEVICE), labels.to(DEVICE)
            outputs = net(images)
            loss = criterion(outputs, labels)
            running_loss += loss.item()
            _, predicted = torch.max(outputs.data, 1)
            total += labels.size(0)
            correct += (predicted == labels).sum().item()

    accuracy = 100 * correct / total
    average_loss = running_loss / len(dataloader)
    return average_loss, accuracy

class Client():
    def __init__(self, net, trainloader, valloader):
        self.net = copy.deepcopy(net)
        self.trainloader = trainloader
        self.valloader = valloader

    def get_parameters(self):
        return self.get_parameters_from_net(self.net)

    @staticmethod
    def get_parameters_from_net(net) -> List[np.ndarray]:
        return [val.cpu().numpy() for _, val in net.state_dict().items()]

    def set_parameters(self, parameters: List[np.ndarray]):
        self.set_parameters_to_net(self.net, parameters)

    @staticmethod
    def set_parameters_to_net(net, parameters: List[np.ndarray]):
        params_dict = zip(net.state_dict().keys(), parameters)
        state_dict = OrderedDict({k: torch.Tensor(v) for k, v in params_dict})
        net.load_state_dict(state_dict, strict=True)

    def fit(self, parameters):
        self.set_parameters(parameters)
        train(self.net, self.trainloader, epochs=1)
        return self.get_parameters(), len(self.trainloader), {}

# End of preamble.


# Python class for reactor client2935757048_main
class _client2935757048_main:
    # Constructor
    def __init__(self, **kwargs):
        # Define parameters and their default values
        # Handle parameters that are set in instantiation
        self.__dict__.update(kwargs)
        # Define state variables
    
    @property
    def bank_index(self):
        return self._bank_index # pylint: disable=no-member
    
    

# Python class for reactor clientreactor1761463055
class _clientreactor1761463055:
    # Constructor
    def __init__(self, **kwargs):
        # Define parameters and their default values
        # Handle parameters that are set in instantiation
        self.__dict__.update(kwargs)
        # Define state variables
        self._client = None
        self._net = None
    
    @property
    def bank_index(self):
        return self._bank_index # pylint: disable=no-member
    
    
    def reaction_function_0(self):
        self._net = Net().to(DEVICE)
        global_parameter = Client.get_parameters_from_net(self._net)
        self._client = Client(self._net, trainloaders[0], valloaders[0])
        return 0
    def reaction_function_1(self, global_parameter, updated_parameters, num_train_samples):
        print(global_parameter.value)
        u_p, samples, _ = self._client.fit(global_parameter.value) #unpack
        updated_parameters.set(u_p)
        num_train_samples.set(samples)
        return 0



# Instantiate classes
client2_main_lf = [None] * 1
client2_client2_lf = [None] * 1
# Start initializing client2 of class client2935757048_main
for client2_main_i in range(1):
    bank_index = client2_main_i
    client2_main_lf[0] = _client2935757048_main(
        _bank_index = 0,
    )
    # Start initializing client2.client2 of class clientreactor1761463055
    for client2_client2_i in range(1):
        bank_index = client2_client2_i
        client2_client2_lf[0] = _clientreactor1761463055(
            _bank_index = 0,
        )


# The main function
def main(argv):
    start(argv)

# As is customary in Python programs, the main() function
# should only be executed if the main module is active.
if __name__=="__main__":
    main(sys.argv)
