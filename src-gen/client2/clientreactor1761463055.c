#include "include/api/api.h"
#include "include/api/set.h"
#include "include/client2/ClientReactor.h"
#include "clientreactor1761463055.h"
#include "include/api/set.h"
void clientreactor1761463055reaction_function_0(void* instance_args){
    _clientreactor1761463055_self_t* self = (_clientreactor1761463055_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    #line 152 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client2.lf"
    // Acquire the GIL (Global Interpreter Lock) to be able to call Python APIs.
    PyGILState_STATE gstate;
    gstate = PyGILState_Ensure();
    LF_PRINT_DEBUG("Calling reaction function clientreactor1761463055.reaction_function_0");
    PyObject *rValue = PyObject_CallObject(
        self->_lf_py_reaction_function_0, 
        Py_BuildValue("()")
    );
    if (rValue == NULL) {
        lf_print_error("FATAL: Calling reaction clientreactor1761463055.reaction_function_0 failed.");
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
void clientreactor1761463055reaction_function_1(void* instance_args){
    _clientreactor1761463055_self_t* self = (_clientreactor1761463055_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    clientreactor1761463055_global_parameter_t* global_parameter = self->_lf_global_parameter;
    int global_parameter_width = self->_lf_global_parameter_width; SUPPRESS_UNUSED_WARNING(global_parameter_width);
    clientreactor1761463055_updated_parameters_t* updated_parameters = &self->_lf_updated_parameters;
    clientreactor1761463055_num_train_samples_t* num_train_samples = &self->_lf_num_train_samples;
    #line 159 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client2.lf"
    // Acquire the GIL (Global Interpreter Lock) to be able to call Python APIs.
    PyGILState_STATE gstate;
    gstate = PyGILState_Ensure();
    LF_PRINT_DEBUG("Calling reaction function clientreactor1761463055.reaction_function_1");
    PyObject *rValue = PyObject_CallObject(
        self->_lf_py_reaction_function_1, 
        Py_BuildValue("(OOO)", convert_C_port_to_py(global_parameter, global_parameter_width), convert_C_port_to_py(updated_parameters, -2), convert_C_port_to_py(num_train_samples, -2))
    );
    if (rValue == NULL) {
        lf_print_error("FATAL: Calling reaction clientreactor1761463055.reaction_function_1 failed.");
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
_clientreactor1761463055_self_t* new_clientreactor1761463055() {
    _clientreactor1761463055_self_t* self = (_clientreactor1761463055_self_t*)_lf_new_reactor(sizeof(_clientreactor1761463055_self_t));
    #line 143 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client2.lf"
    // Set input by default to an always absent default input.
    #line 143 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client2.lf"
    self->_lf_global_parameter = &self->_lf_default__global_parameter;
    #line 149 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client2.lf"
    self->_lf__reaction_0.number = 0;
    #line 149 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client2.lf"
    self->_lf__reaction_0.function = clientreactor1761463055reaction_function_0;
    #line 149 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client2.lf"
    self->_lf__reaction_0.self = self;
    #line 149 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client2.lf"
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    #line 149 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client2.lf"
    self->_lf__reaction_0.STP_handler = NULL;
    #line 149 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client2.lf"
    self->_lf__reaction_0.name = "?";
    #line 149 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client2.lf"
    self->_lf__reaction_0.mode = NULL;
    #line 157 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client2.lf"
    self->_lf__reaction_1.number = 1;
    #line 157 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client2.lf"
    self->_lf__reaction_1.function = clientreactor1761463055reaction_function_1;
    #line 157 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client2.lf"
    self->_lf__reaction_1.self = self;
    #line 157 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client2.lf"
    self->_lf__reaction_1.deadline_violation_handler = NULL;
    #line 157 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client2.lf"
    self->_lf__reaction_1.STP_handler = NULL;
    #line 157 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client2.lf"
    self->_lf__reaction_1.name = "?";
    #line 157 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client2.lf"
    self->_lf__reaction_1.mode = NULL;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__startup.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__startup_reactions[0] = &self->_lf__reaction_0;
    self->_lf__startup.last = NULL;
    self->_lf__startup.reactions = &self->_lf__startup_reactions[0];
    self->_lf__startup.number_of_reactions = 1;
    self->_lf__startup.is_timer = false;
    #line 143 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client2.lf"
    self->_lf__global_parameter.last = NULL;
    #line 143 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client2.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 143 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client2.lf"
    self->_lf__global_parameter.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 143 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client2.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 143 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client2.lf"
    #line 143 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client2.lf"
    self->_lf__global_parameter_reactions[0] = &self->_lf__reaction_1;
    #line 143 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client2.lf"
    self->_lf__global_parameter.reactions = &self->_lf__global_parameter_reactions[0];
    #line 143 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client2.lf"
    self->_lf__global_parameter.number_of_reactions = 1;
    #line 143 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client2.lf"
    #ifdef FEDERATED
    #line 143 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client2.lf"
    self->_lf__global_parameter.physical_time_of_arrival = NEVER;
    #line 143 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client2.lf"
    #endif // FEDERATED
    self->_lf__global_parameter.tmplt.type.element_size = sizeof(PyObject);
    return self;
}
