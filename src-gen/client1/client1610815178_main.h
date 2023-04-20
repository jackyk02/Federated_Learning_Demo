#ifndef CLIENT1610815178_MAIN_H
#define CLIENT1610815178_MAIN_H
#include "include/core/reactor.h"
#include "clientreactor634324356.h"
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
#line 170 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
typedef generic_action_instance_struct client1610815178_main_outputControlReactionTrigger_t;
#line 171 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
typedef generic_action_instance_struct client1610815178_main_networkMessage_3_t;
typedef struct {
    struct self_base_t base;
    char *_lf_name;
    PyObject* _lf_py_reaction_function_0;
    PyObject* _lf_py_reaction_function_1;
    PyObject* _lf_py_reaction_function_2;
    PyObject* _lf_py_reaction_function_3;
    PyObject* _lf_py_reaction_function_4;
    #line 170 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    client1610815178_main_outputControlReactionTrigger_t _lf_outputControlReactionTrigger;
    #line 171 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    client1610815178_main_networkMessage_3_t _lf_networkMessage_3;
    struct {
        #line 144 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
        clientreactor634324356_updated_parameters_t* updated_parameters;
        #line 144 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
        trigger_t updated_parameters_trigger;
        #line 144 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
        reaction_t* updated_parameters_reactions[1];
        #line 145 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
        clientreactor634324356_num_train_samples_t* num_train_samples;
        #line 145 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
        trigger_t num_train_samples_trigger;
        #line 145 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
        reaction_t* num_train_samples_reactions[1];
        #line 143 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
        clientreactor634324356_global_parameter_t global_parameter;
    } _lf_client1;
    int _lf_client1_width;
    #line 174 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    reaction_t _lf__reaction_0;
    #line 201 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    reaction_t _lf__reaction_1;
    #line 215 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    reaction_t _lf__reaction_2;
    #line 242 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    reaction_t _lf__reaction_3;
    #line 256 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    reaction_t _lf__reaction_4;
    #line 170 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    trigger_t _lf__outputControlReactionTrigger;
    #line 170 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    reaction_t* _lf__outputControlReactionTrigger_reactions[2];
    #line 171 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    trigger_t _lf__networkMessage_3;
    #line 171 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    reaction_t* _lf__networkMessage_3_reactions[1];
} _client1610815178_main_main_self_t;
_client1610815178_main_main_self_t* new_client1610815178_main();
#endif // CLIENT1610815178_MAIN_H
