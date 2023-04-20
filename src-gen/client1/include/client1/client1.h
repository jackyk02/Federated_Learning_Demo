#ifndef client11188084129_main_H
#define client11188084129_main_H
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
typedef struct client1_self_t{
int end[0]; // placeholder; MSVC does not compile empty structs
} client1_self_t;
#line 170 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
typedef generic_action_instance_struct client11188084129_main_outputControlReactionTrigger_t;
#line 171 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
typedef generic_action_instance_struct client11188084129_main_networkMessage_3_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_sparse_io_record_t* sparse_record;
    int destination_channel;
    int num_destinations;
    PyObject* value;
} clientreactor_global_parameter_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_sparse_io_record_t* sparse_record;
    int destination_channel;
    int num_destinations;
    PyObject* value;
} clientreactor_updated_parameters_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_sparse_io_record_t* sparse_record;
    int destination_channel;
    int num_destinations;
    PyObject* value;
} clientreactor_num_train_samples_t;
#endif
