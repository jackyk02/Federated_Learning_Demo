#ifndef SERVERREACTOR788918328_H
#define SERVERREACTOR788918328_H
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
#line 144 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
typedef generic_port_instance_struct serverreactor788918328_updated_parameters_t;
#line 145 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
typedef generic_port_instance_struct serverreactor788918328_num_train_samples_t;
#line 143 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
typedef generic_port_instance_struct serverreactor788918328_global_parameter_t;
typedef struct {
    struct self_base_t base;
    char *_lf_name;
    PyObject* _lf_py_reaction_function_0;
    PyObject* _lf_py_reaction_function_1;
    #line 146 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    PyObject* _net;
    #line 147 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    PyObject* new_params_lst;
    #line 144 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    // Multiport input array will be malloc'd later.
    #line 144 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    serverreactor788918328_updated_parameters_t** _lf_updated_parameters;
    #line 144 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    int _lf_updated_parameters_width;
    #line 144 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    // Default input (in case it does not get connected)
    #line 144 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    serverreactor788918328_updated_parameters_t _lf_default__updated_parameters;
    #line 144 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    // Struct to support efficiently reading sparse inputs.
    #line 144 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    lf_sparse_io_record_t* _lf_updated_parameters__sparse;
    #line 145 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    // Multiport input array will be malloc'd later.
    #line 145 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    serverreactor788918328_num_train_samples_t** _lf_num_train_samples;
    #line 145 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    int _lf_num_train_samples_width;
    #line 145 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    // Default input (in case it does not get connected)
    #line 145 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    serverreactor788918328_num_train_samples_t _lf_default__num_train_samples;
    #line 145 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    // Struct to support efficiently reading sparse inputs.
    #line 145 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    lf_sparse_io_record_t* _lf_num_train_samples__sparse;
    #line 143 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    serverreactor788918328_global_parameter_t _lf_global_parameter;
    #line 143 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    int _lf_global_parameter_width;
    #line 149 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    reaction_t _lf__reaction_0;
    #line 156 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    reaction_t _lf__reaction_1;
    trigger_t _lf__startup;
    reaction_t* _lf__startup_reactions[1];
    #line 144 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    trigger_t _lf__updated_parameters;
    #line 144 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    reaction_t* _lf__updated_parameters_reactions[1];
    #ifdef FEDERATED
    trigger_t* _lf__updated_parameters_network_port_status;
    
    #endif // FEDERATED
    #line 145 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    trigger_t _lf__num_train_samples;
    #line 145 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    reaction_t* _lf__num_train_samples_reactions[1];
    #ifdef FEDERATED
    trigger_t* _lf__num_train_samples_network_port_status;
    
    #endif // FEDERATED
} _serverreactor788918328_self_t;
_serverreactor788918328_self_t* new_serverreactor788918328();
#endif // SERVERREACTOR788918328_H
