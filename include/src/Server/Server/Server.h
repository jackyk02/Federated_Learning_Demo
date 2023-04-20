#ifndef server1436171503_main_H
#define server1436171503_main_H
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
#ifdef __cplusplus
extern "C" {
#endif
#include "../include/api/api.h"
#include "../include/api/set.h"
#include "../include/core/reactor.h"
#ifdef __cplusplus
}
#endif
typedef struct server_self_t{
int end[0]; // placeholder; MSVC does not compile empty structs
} server_self_t;
#line 191 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
typedef generic_action_instance_struct server1436171503_main_inputControlReactionTrigger_t;
#line 192 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
typedef generic_action_instance_struct server1436171503_main_networkMessage_t;
#line 193 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
typedef generic_action_instance_struct server1436171503_main_inputControlReactionTrigger_0_t;
#line 194 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
typedef generic_action_instance_struct server1436171503_main_networkMessage_0_t;
#line 195 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
typedef generic_action_instance_struct server1436171503_main_inputControlReactionTrigger_1_t;
#line 196 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
typedef generic_action_instance_struct server1436171503_main_networkMessage_1_t;
#line 197 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
typedef generic_action_instance_struct server1436171503_main_inputControlReactionTrigger_2_t;
#line 198 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
typedef generic_action_instance_struct server1436171503_main_networkMessage_2_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_sparse_io_record_t* sparse_record;
    int destination_channel;
    int num_destinations;
    PyObject* value;
} serverreactor_updated_parameters_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_sparse_io_record_t* sparse_record;
    int destination_channel;
    int num_destinations;
    PyObject* value;
} serverreactor_num_train_samples_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_sparse_io_record_t* sparse_record;
    int destination_channel;
    int num_destinations;
    PyObject* value;
} serverreactor_global_parameter_t;
#endif
