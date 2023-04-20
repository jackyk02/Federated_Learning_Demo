#ifndef CLIENTREACTOR463863444_H
#define CLIENTREACTOR463863444_H
#include "include/core/reactor.h"
#include <limits.h>
#include "include/core/platform.h"
#include "include/api/api.h"
#include "include/core/reactor.h"
#include "include/core/reactor_common.h"
#include "include/core/threaded/scheduler.h"
#include "include/core/mixed_radix.h"
#include "include/core/port.h"
int lf_reactor_c_main(int argc, const char* argv[]);
#include "include/core/federated/federate.h"
#include "include/core/federated/net_common.h"
#include "pythontarget.h"
#line 143 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
typedef generic_port_instance_struct clientreactor463863444_global_parameter_t;
#line 144 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
typedef generic_port_instance_struct clientreactor463863444_updated_parameters_t;
#line 145 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
typedef generic_port_instance_struct clientreactor463863444_num_train_samples_t;
typedef struct {
    struct self_base_t base;
    char *_lf_name;
    PyObject* _lf_py_reaction_function_0;
    PyObject* _lf_py_reaction_function_1;
    #line 146 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    PyObject* _client;
    #line 147 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    PyObject* _net;
    #line 143 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    clientreactor463863444_global_parameter_t* _lf_global_parameter;
    #line 143 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    // width of -2 indicates that it is not a multiport.
    #line 143 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    int _lf_global_parameter_width;
    #line 143 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    // Default input (in case it does not get connected)
    #line 143 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    clientreactor463863444_global_parameter_t _lf_default__global_parameter;
    #line 144 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    clientreactor463863444_updated_parameters_t _lf_updated_parameters;
    #line 144 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    int _lf_updated_parameters_width;
    #line 145 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    clientreactor463863444_num_train_samples_t _lf_num_train_samples;
    #line 145 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    int _lf_num_train_samples_width;
    #line 149 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    reaction_t _lf__reaction_0;
    #line 157 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    reaction_t _lf__reaction_1;
    trigger_t _lf__startup;
    reaction_t* _lf__startup_reactions[1];
    #line 143 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    trigger_t _lf__global_parameter;
    #line 143 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    reaction_t* _lf__global_parameter_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
} _clientreactor463863444_self_t;
_clientreactor463863444_self_t* new_clientreactor463863444();
#endif // CLIENTREACTOR463863444_H
