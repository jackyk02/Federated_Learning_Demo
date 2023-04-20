#ifndef serverreactor1598031955_H
#define serverreactor1598031955_H
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
typedef struct serverreactor_self_t{
PyObject* _net;
PyObject* new_params_lst;
int end[0]; // placeholder; MSVC does not compile empty structs
} serverreactor_self_t;
#line 144 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
typedef generic_port_instance_struct serverreactor1598031955_updated_parameters_t;
#line 145 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
typedef generic_port_instance_struct serverreactor1598031955_num_train_samples_t;
#line 143 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
typedef generic_port_instance_struct serverreactor1598031955_global_parameter_t;
#endif
