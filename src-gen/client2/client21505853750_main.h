#ifndef CLIENT21505853750_MAIN_H
#define CLIENT21505853750_MAIN_H
#include "include/core/reactor.h"
#include "clientreactor145684288.h"
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
#line 169 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client2.lf"
typedef generic_action_instance_struct client21505853750_main_outputControlReactionTrigger_t;
#line 170 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client2.lf"
typedef generic_action_instance_struct client21505853750_main_networkMessage_4_t;
typedef struct {
    struct self_base_t base;
    char *_lf_name;
    PyObject* _lf_py_reaction_function_0;
    PyObject* _lf_py_reaction_function_1;
    PyObject* _lf_py_reaction_function_2;
    PyObject* _lf_py_reaction_function_3;
    PyObject* _lf_py_reaction_function_4;
    #line 169 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client2.lf"
    client21505853750_main_outputControlReactionTrigger_t _lf_outputControlReactionTrigger;
    #line 170 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client2.lf"
    client21505853750_main_networkMessage_4_t _lf_networkMessage_4;
    struct {
        #line 144 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client2.lf"
        clientreactor145684288_updated_parameters_t* updated_parameters;
        #line 144 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client2.lf"
        trigger_t updated_parameters_trigger;
        #line 144 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client2.lf"
        reaction_t* updated_parameters_reactions[1];
        #line 145 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client2.lf"
        clientreactor145684288_num_train_samples_t* num_train_samples;
        #line 145 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client2.lf"
        trigger_t num_train_samples_trigger;
        #line 145 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client2.lf"
        reaction_t* num_train_samples_reactions[1];
        #line 143 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client2.lf"
        clientreactor145684288_global_parameter_t global_parameter;
    } _lf_client2;
    int _lf_client2_width;
    #line 173 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client2.lf"
    reaction_t _lf__reaction_0;
    #line 200 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client2.lf"
    reaction_t _lf__reaction_1;
    #line 214 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client2.lf"
    reaction_t _lf__reaction_2;
    #line 241 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client2.lf"
    reaction_t _lf__reaction_3;
    #line 255 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client2.lf"
    reaction_t _lf__reaction_4;
    #line 169 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client2.lf"
    trigger_t _lf__outputControlReactionTrigger;
    #line 169 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client2.lf"
    reaction_t* _lf__outputControlReactionTrigger_reactions[2];
    #line 170 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client2.lf"
    trigger_t _lf__networkMessage_4;
    #line 170 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client2.lf"
    reaction_t* _lf__networkMessage_4_reactions[1];
} _client21505853750_main_main_self_t;
_client21505853750_main_main_self_t* new_client21505853750_main();
#endif // CLIENT21505853750_MAIN_H
