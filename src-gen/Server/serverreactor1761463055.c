#include "include/api/api.h"
#include "include/api/set.h"
#include "include/Server/ServerReactor.h"
#include "serverreactor1761463055.h"
#include "include/api/set.h"
void serverreactor1761463055reaction_function_0(void* instance_args){
    _serverreactor1761463055_self_t* self = (_serverreactor1761463055_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    serverreactor1761463055_global_parameter_t* global_parameter = &self->_lf_global_parameter;
    #line 151 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    // Acquire the GIL (Global Interpreter Lock) to be able to call Python APIs.
    PyGILState_STATE gstate;
    gstate = PyGILState_Ensure();
    LF_PRINT_DEBUG("Calling reaction function serverreactor1761463055.reaction_function_0");
    PyObject *rValue = PyObject_CallObject(
        self->_lf_py_reaction_function_0, 
        Py_BuildValue("(O)", convert_C_port_to_py(global_parameter, -2))
    );
    if (rValue == NULL) {
        lf_print_error("FATAL: Calling reaction serverreactor1761463055.reaction_function_0 failed.");
        if (PyErr_Occurred()) {
            PyErr_PrintEx(0);
            PyErr_Clear(); // this will reset the error indicator so we can run Python code again
        }
        /* Release the thread. No Python API allowed beyond this point. */
    PyGILState_Release(gstate);
        Py_FinalizeEx();
        exit(1);
    }
    
    /* Release the thread. No Python API allowed beyond this point. */
    /* Release the thread. No Python API allowed beyond this point. */
    PyGILState_Release(gstate);
}
#include "include/api/set_undef.h"
#include "include/api/set.h"
void serverreactor1761463055reaction_function_1(void* instance_args){
    _serverreactor1761463055_self_t* self = (_serverreactor1761463055_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    serverreactor1761463055_updated_parameters_t** updated_parameters = self->_lf_updated_parameters;
    int updated_parameters_width = self->_lf_updated_parameters_width; SUPPRESS_UNUSED_WARNING(updated_parameters_width);
    serverreactor1761463055_num_train_samples_t** num_train_samples = self->_lf_num_train_samples;
    int num_train_samples_width = self->_lf_num_train_samples_width; SUPPRESS_UNUSED_WARNING(num_train_samples_width);
    serverreactor1761463055_global_parameter_t* global_parameter = &self->_lf_global_parameter;
    #line 158 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    // Acquire the GIL (Global Interpreter Lock) to be able to call Python APIs.
    PyGILState_STATE gstate;
    gstate = PyGILState_Ensure();
    LF_PRINT_DEBUG("Calling reaction function serverreactor1761463055.reaction_function_1");
    PyObject *rValue = PyObject_CallObject(
        self->_lf_py_reaction_function_1, 
        Py_BuildValue("(OOO)", convert_C_port_to_py(updated_parameters, updated_parameters_width), convert_C_port_to_py(num_train_samples, num_train_samples_width), convert_C_port_to_py(global_parameter, -2))
    );
    if (rValue == NULL) {
        lf_print_error("FATAL: Calling reaction serverreactor1761463055.reaction_function_1 failed.");
        if (PyErr_Occurred()) {
            PyErr_PrintEx(0);
            PyErr_Clear(); // this will reset the error indicator so we can run Python code again
        }
        /* Release the thread. No Python API allowed beyond this point. */
    PyGILState_Release(gstate);
        Py_FinalizeEx();
        exit(1);
    }
    
    /* Release the thread. No Python API allowed beyond this point. */
    /* Release the thread. No Python API allowed beyond this point. */
    PyGILState_Release(gstate);
}
#include "include/api/set_undef.h"
_serverreactor1761463055_self_t* new_serverreactor1761463055() {
    _serverreactor1761463055_self_t* self = (_serverreactor1761463055_self_t*)_lf_new_reactor(sizeof(_serverreactor1761463055_self_t));
    #line 149 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_0.number = 0;
    #line 149 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_0.function = serverreactor1761463055reaction_function_0;
    #line 149 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_0.self = self;
    #line 149 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    #line 149 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_0.STP_handler = NULL;
    #line 149 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_0.name = "?";
    #line 149 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_0.mode = NULL;
    #line 156 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_1.number = 1;
    #line 156 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_1.function = serverreactor1761463055reaction_function_1;
    #line 156 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_1.self = self;
    #line 156 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_1.deadline_violation_handler = NULL;
    #line 156 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_1.STP_handler = NULL;
    #line 156 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_1.name = "?";
    #line 156 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_1.mode = NULL;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__startup.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__startup_reactions[0] = &self->_lf__reaction_0;
    self->_lf__startup.last = NULL;
    self->_lf__startup.reactions = &self->_lf__startup_reactions[0];
    self->_lf__startup.number_of_reactions = 1;
    self->_lf__startup.is_timer = false;
    #line 144 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__updated_parameters.last = NULL;
    #line 144 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 144 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__updated_parameters.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 144 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 144 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #line 144 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__updated_parameters_reactions[0] = &self->_lf__reaction_1;
    #line 144 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__updated_parameters.reactions = &self->_lf__updated_parameters_reactions[0];
    #line 144 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__updated_parameters.number_of_reactions = 1;
    #line 144 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #ifdef FEDERATED
    #line 144 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__updated_parameters.physical_time_of_arrival = NEVER;
    #line 144 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #endif // FEDERATED
    self->_lf__updated_parameters.tmplt.type.element_size = sizeof(PyObject);
    #line 145 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__num_train_samples.last = NULL;
    #line 145 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 145 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__num_train_samples.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 145 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 145 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #line 145 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__num_train_samples_reactions[0] = &self->_lf__reaction_1;
    #line 145 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__num_train_samples.reactions = &self->_lf__num_train_samples_reactions[0];
    #line 145 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__num_train_samples.number_of_reactions = 1;
    #line 145 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #ifdef FEDERATED
    #line 145 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__num_train_samples.physical_time_of_arrival = NEVER;
    #line 145 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #endif // FEDERATED
    self->_lf__num_train_samples.tmplt.type.element_size = sizeof(PyObject);
    return self;
}
