#ifndef SERVER1967650907_MAIN_H
#define SERVER1967650907_MAIN_H
#include "include/core/reactor.h"
#include "serverreactor822540196.h"
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
#line 191 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
typedef generic_action_instance_struct server1967650907_main_inputControlReactionTrigger_t;
#line 192 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
typedef generic_action_instance_struct server1967650907_main_networkMessage_t;
#line 193 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
typedef generic_action_instance_struct server1967650907_main_inputControlReactionTrigger_0_t;
#line 194 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
typedef generic_action_instance_struct server1967650907_main_networkMessage_0_t;
#line 195 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
typedef generic_action_instance_struct server1967650907_main_inputControlReactionTrigger_1_t;
#line 196 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
typedef generic_action_instance_struct server1967650907_main_networkMessage_1_t;
#line 197 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
typedef generic_action_instance_struct server1967650907_main_inputControlReactionTrigger_2_t;
#line 198 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
typedef generic_action_instance_struct server1967650907_main_networkMessage_2_t;
typedef struct {
    struct self_base_t base;
    char *_lf_name;
    PyObject* _lf_py_reaction_function_0;
    PyObject* _lf_py_reaction_function_1;
    PyObject* _lf_py_reaction_function_2;
    PyObject* _lf_py_reaction_function_3;
    PyObject* _lf_py_reaction_function_4;
    PyObject* _lf_py_reaction_function_5;
    PyObject* _lf_py_reaction_function_6;
    PyObject* _lf_py_reaction_function_7;
    PyObject* _lf_py_reaction_function_8;
    PyObject* _lf_py_reaction_function_9;
    #line 191 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    server1967650907_main_inputControlReactionTrigger_t _lf_inputControlReactionTrigger;
    #line 192 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    server1967650907_main_networkMessage_t _lf_networkMessage;
    #line 193 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    server1967650907_main_inputControlReactionTrigger_0_t _lf_inputControlReactionTrigger_0;
    #line 194 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    server1967650907_main_networkMessage_0_t _lf_networkMessage_0;
    #line 195 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    server1967650907_main_inputControlReactionTrigger_1_t _lf_inputControlReactionTrigger_1;
    #line 196 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    server1967650907_main_networkMessage_1_t _lf_networkMessage_1;
    #line 197 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    server1967650907_main_inputControlReactionTrigger_2_t _lf_inputControlReactionTrigger_2;
    #line 198 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    server1967650907_main_networkMessage_2_t _lf_networkMessage_2;
    struct {
        #line 144 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
        serverreactor822540196_updated_parameters_t** updated_parameters;
        #line 144 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
        int updated_parameters_width;
        #line 145 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
        serverreactor822540196_num_train_samples_t** num_train_samples;
        #line 145 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
        int num_train_samples_width;
        #line 143 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
        serverreactor822540196_global_parameter_t* global_parameter;
        #line 143 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
        trigger_t global_parameter_trigger;
        #line 143 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
        reaction_t* global_parameter_reactions[2];
    } _lf_Server;
    int _lf_Server_width;
    #line 201 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    reaction_t _lf__reaction_0;
    #line 209 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    reaction_t _lf__reaction_1;
    #line 230 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    reaction_t _lf__reaction_2;
    #line 238 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    reaction_t _lf__reaction_3;
    #line 259 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    reaction_t _lf__reaction_4;
    #line 267 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    reaction_t _lf__reaction_5;
    #line 288 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    reaction_t _lf__reaction_6;
    #line 296 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    reaction_t _lf__reaction_7;
    #line 317 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    reaction_t _lf__reaction_8;
    #line 344 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    reaction_t _lf__reaction_9;
    #line 191 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    trigger_t _lf__inputControlReactionTrigger;
    #line 191 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    reaction_t* _lf__inputControlReactionTrigger_reactions[1];
    #line 192 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    trigger_t _lf__networkMessage;
    #line 192 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    reaction_t* _lf__networkMessage_reactions[1];
    #line 193 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    trigger_t _lf__inputControlReactionTrigger_0;
    #line 193 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    reaction_t* _lf__inputControlReactionTrigger_0_reactions[1];
    #line 194 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    trigger_t _lf__networkMessage_0;
    #line 194 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    reaction_t* _lf__networkMessage_0_reactions[1];
    #line 195 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    trigger_t _lf__inputControlReactionTrigger_1;
    #line 195 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    reaction_t* _lf__inputControlReactionTrigger_1_reactions[1];
    #line 196 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    trigger_t _lf__networkMessage_1;
    #line 196 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    reaction_t* _lf__networkMessage_1_reactions[1];
    #line 197 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    trigger_t _lf__inputControlReactionTrigger_2;
    #line 197 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    reaction_t* _lf__inputControlReactionTrigger_2_reactions[1];
    #line 198 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    trigger_t _lf__networkMessage_2;
    #line 198 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    reaction_t* _lf__networkMessage_2_reactions[1];
} _server1967650907_main_main_self_t;
_server1967650907_main_main_self_t* new_server1967650907_main();
#endif // SERVER1967650907_MAIN_H
