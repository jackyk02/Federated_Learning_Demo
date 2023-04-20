#include "include/api/api.h"
#include "include/api/set.h"
#include "include/Server/Server.h"
#include "server1967650907_main.h"
#include "include/api/set.h"
void server1967650907_mainreaction_function_0(void* instance_args) {
    _server1967650907_main_main_self_t* self = (_server1967650907_main_main_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    struct Server {
        serverreactor822540196_updated_parameters_t** updated_parameters;
    int updated_parameters_width;
    
    } Server;
    // Expose the action struct as a local variable whose name matches the action name.
    server1967650907_main_inputControlReactionTrigger_t* inputControlReactionTrigger = &self->_lf_inputControlReactionTrigger;
    // Set the fields of the action struct to match the current trigger.
    inputControlReactionTrigger->is_present = (bool)self->_lf__inputControlReactionTrigger.status;
    inputControlReactionTrigger->has_value = ((self->_lf__inputControlReactionTrigger.tmplt.token) != NULL && (self->_lf__inputControlReactionTrigger.tmplt.token)->value != NULL);
    _lf_replace_template_token((token_template_t*)inputControlReactionTrigger, (self->_lf__inputControlReactionTrigger.tmplt.token));
    Server.updated_parameters = self->_lf_Server.updated_parameters;
    Server.updated_parameters_width = self->_lf_Server.updated_parameters_width;
    #line 204 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    /*Correspondence: Range: [(203, 8), (206, 41)) -> Range: [(0, 0), (3, 41)) (verbatim=true; src=/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf)*/// **** This reaction is unordered.
    interval_t max_STP = 0LL;
    // Wait until the port status is known
    wait_until_port_status_known(0, max_STP);
}
#include "include/api/set_undef.h"
#include "include/api/set.h"
void server1967650907_mainreaction_function_1(void* instance_args) {
    _server1967650907_main_main_self_t* self = (_server1967650907_main_main_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    struct Server {
        serverreactor822540196_updated_parameters_t** updated_parameters;
    int updated_parameters_width;
    
    } Server;
    // Expose the action struct as a local variable whose name matches the action name.
    server1967650907_main_networkMessage_t* networkMessage = &self->_lf_networkMessage;
    // Set the fields of the action struct to match the current trigger.
    networkMessage->is_present = (bool)self->_lf__networkMessage.status;
    networkMessage->has_value = ((self->_lf__networkMessage.tmplt.token) != NULL && (self->_lf__networkMessage.tmplt.token)->value != NULL);
    _lf_replace_template_token((token_template_t*)networkMessage, (self->_lf__networkMessage.tmplt.token));
    Server.updated_parameters = self->_lf_Server.updated_parameters;
    Server.updated_parameters_width = self->_lf_Server.updated_parameters_width;
    #line 212 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    /*Correspondence: Range: [(211, 8), (227, 27)) -> Range: [(0, 0), (16, 27)) (verbatim=true; src=/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf)*/// **** This reaction is unordered.
    // Acquire the GIL (Global Interpreter Lock) to be able to call Python APIs.
    PyGILState_STATE gstate;
    gstate = PyGILState_Ensure();
    // **** This reaction is unordered.
    Server.updated_parameters[0]->physical_time_of_arrival = self->_lf__networkMessage.physical_time_of_arrival;
    PyObject* message_byte_array = PyBytes_FromStringAndSize((char*)networkMessage->token->value, networkMessage->token->length);
    Py_XINCREF(message_byte_array);
    PyObject* deserialized_message = PyObject_CallMethod(global_pickler, "loads", "O", message_byte_array);
    if (deserialized_message == NULL) {
        if (PyErr_Occurred()) PyErr_Print();
        lf_print_error_and_exit("Could not deserialize deserialized_message.");
    }
    Py_XDECREF(message_byte_array);
    lf_set(Server.updated_parameters[0], deserialized_message);
    /* Release the thread. No Python API allowed beyond this point. */
    PyGILState_Release(gstate);
}
#include "include/api/set_undef.h"
#include "include/api/set.h"
void server1967650907_mainreaction_function_2(void* instance_args) {
    _server1967650907_main_main_self_t* self = (_server1967650907_main_main_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    struct Server {
        serverreactor822540196_num_train_samples_t** num_train_samples;
    int num_train_samples_width;
    
    } Server;
    // Expose the action struct as a local variable whose name matches the action name.
    server1967650907_main_inputControlReactionTrigger_0_t* inputControlReactionTrigger_0 = &self->_lf_inputControlReactionTrigger_0;
    // Set the fields of the action struct to match the current trigger.
    inputControlReactionTrigger_0->is_present = (bool)self->_lf__inputControlReactionTrigger_0.status;
    inputControlReactionTrigger_0->has_value = ((self->_lf__inputControlReactionTrigger_0.tmplt.token) != NULL && (self->_lf__inputControlReactionTrigger_0.tmplt.token)->value != NULL);
    _lf_replace_template_token((token_template_t*)inputControlReactionTrigger_0, (self->_lf__inputControlReactionTrigger_0.tmplt.token));
    Server.num_train_samples = self->_lf_Server.num_train_samples;
    Server.num_train_samples_width = self->_lf_Server.num_train_samples_width;
    #line 233 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    /*Correspondence: Range: [(232, 8), (235, 41)) -> Range: [(0, 0), (3, 41)) (verbatim=true; src=/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf)*/// **** This reaction is unordered.
    interval_t max_STP = 0LL;
    // Wait until the port status is known
    wait_until_port_status_known(1, max_STP);
}
#include "include/api/set_undef.h"
#include "include/api/set.h"
void server1967650907_mainreaction_function_3(void* instance_args) {
    _server1967650907_main_main_self_t* self = (_server1967650907_main_main_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    struct Server {
        serverreactor822540196_num_train_samples_t** num_train_samples;
    int num_train_samples_width;
    
    } Server;
    // Expose the action struct as a local variable whose name matches the action name.
    server1967650907_main_networkMessage_0_t* networkMessage_0 = &self->_lf_networkMessage_0;
    // Set the fields of the action struct to match the current trigger.
    networkMessage_0->is_present = (bool)self->_lf__networkMessage_0.status;
    networkMessage_0->has_value = ((self->_lf__networkMessage_0.tmplt.token) != NULL && (self->_lf__networkMessage_0.tmplt.token)->value != NULL);
    _lf_replace_template_token((token_template_t*)networkMessage_0, (self->_lf__networkMessage_0.tmplt.token));
    Server.num_train_samples = self->_lf_Server.num_train_samples;
    Server.num_train_samples_width = self->_lf_Server.num_train_samples_width;
    #line 241 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    /*Correspondence: Range: [(240, 8), (256, 27)) -> Range: [(0, 0), (16, 27)) (verbatim=true; src=/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf)*/// **** This reaction is unordered.
    // Acquire the GIL (Global Interpreter Lock) to be able to call Python APIs.
    PyGILState_STATE gstate;
    gstate = PyGILState_Ensure();
    // **** This reaction is unordered.
    Server.num_train_samples[0]->physical_time_of_arrival = self->_lf__networkMessage_0.physical_time_of_arrival;
    PyObject* message_byte_array = PyBytes_FromStringAndSize((char*)networkMessage_0->token->value, networkMessage_0->token->length);
    Py_XINCREF(message_byte_array);
    PyObject* deserialized_message = PyObject_CallMethod(global_pickler, "loads", "O", message_byte_array);
    if (deserialized_message == NULL) {
        if (PyErr_Occurred()) PyErr_Print();
        lf_print_error_and_exit("Could not deserialize deserialized_message.");
    }
    Py_XDECREF(message_byte_array);
    lf_set(Server.num_train_samples[0], deserialized_message);
    /* Release the thread. No Python API allowed beyond this point. */
    PyGILState_Release(gstate);
}
#include "include/api/set_undef.h"
#include "include/api/set.h"
void server1967650907_mainreaction_function_4(void* instance_args) {
    _server1967650907_main_main_self_t* self = (_server1967650907_main_main_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    struct Server {
        serverreactor822540196_updated_parameters_t** updated_parameters;
    int updated_parameters_width;
    
    } Server;
    // Expose the action struct as a local variable whose name matches the action name.
    server1967650907_main_inputControlReactionTrigger_1_t* inputControlReactionTrigger_1 = &self->_lf_inputControlReactionTrigger_1;
    // Set the fields of the action struct to match the current trigger.
    inputControlReactionTrigger_1->is_present = (bool)self->_lf__inputControlReactionTrigger_1.status;
    inputControlReactionTrigger_1->has_value = ((self->_lf__inputControlReactionTrigger_1.tmplt.token) != NULL && (self->_lf__inputControlReactionTrigger_1.tmplt.token)->value != NULL);
    _lf_replace_template_token((token_template_t*)inputControlReactionTrigger_1, (self->_lf__inputControlReactionTrigger_1.tmplt.token));
    Server.updated_parameters = self->_lf_Server.updated_parameters;
    Server.updated_parameters_width = self->_lf_Server.updated_parameters_width;
    #line 262 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    /*Correspondence: Range: [(261, 8), (264, 41)) -> Range: [(0, 0), (3, 41)) (verbatim=true; src=/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf)*/// **** This reaction is unordered.
    interval_t max_STP = 0LL;
    // Wait until the port status is known
    wait_until_port_status_known(2, max_STP);
}
#include "include/api/set_undef.h"
#include "include/api/set.h"
void server1967650907_mainreaction_function_5(void* instance_args) {
    _server1967650907_main_main_self_t* self = (_server1967650907_main_main_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    struct Server {
        serverreactor822540196_updated_parameters_t** updated_parameters;
    int updated_parameters_width;
    
    } Server;
    // Expose the action struct as a local variable whose name matches the action name.
    server1967650907_main_networkMessage_1_t* networkMessage_1 = &self->_lf_networkMessage_1;
    // Set the fields of the action struct to match the current trigger.
    networkMessage_1->is_present = (bool)self->_lf__networkMessage_1.status;
    networkMessage_1->has_value = ((self->_lf__networkMessage_1.tmplt.token) != NULL && (self->_lf__networkMessage_1.tmplt.token)->value != NULL);
    _lf_replace_template_token((token_template_t*)networkMessage_1, (self->_lf__networkMessage_1.tmplt.token));
    Server.updated_parameters = self->_lf_Server.updated_parameters;
    Server.updated_parameters_width = self->_lf_Server.updated_parameters_width;
    #line 270 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    /*Correspondence: Range: [(269, 8), (285, 27)) -> Range: [(0, 0), (16, 27)) (verbatim=true; src=/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf)*/// **** This reaction is unordered.
    // Acquire the GIL (Global Interpreter Lock) to be able to call Python APIs.
    PyGILState_STATE gstate;
    gstate = PyGILState_Ensure();
    // **** This reaction is unordered.
    Server.updated_parameters[1]->physical_time_of_arrival = self->_lf__networkMessage_1.physical_time_of_arrival;
    PyObject* message_byte_array = PyBytes_FromStringAndSize((char*)networkMessage_1->token->value, networkMessage_1->token->length);
    Py_XINCREF(message_byte_array);
    PyObject* deserialized_message = PyObject_CallMethod(global_pickler, "loads", "O", message_byte_array);
    if (deserialized_message == NULL) {
        if (PyErr_Occurred()) PyErr_Print();
        lf_print_error_and_exit("Could not deserialize deserialized_message.");
    }
    Py_XDECREF(message_byte_array);
    lf_set(Server.updated_parameters[1], deserialized_message);
    /* Release the thread. No Python API allowed beyond this point. */
    PyGILState_Release(gstate);
}
#include "include/api/set_undef.h"
#include "include/api/set.h"
void server1967650907_mainreaction_function_6(void* instance_args) {
    _server1967650907_main_main_self_t* self = (_server1967650907_main_main_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    struct Server {
        serverreactor822540196_num_train_samples_t** num_train_samples;
    int num_train_samples_width;
    
    } Server;
    // Expose the action struct as a local variable whose name matches the action name.
    server1967650907_main_inputControlReactionTrigger_2_t* inputControlReactionTrigger_2 = &self->_lf_inputControlReactionTrigger_2;
    // Set the fields of the action struct to match the current trigger.
    inputControlReactionTrigger_2->is_present = (bool)self->_lf__inputControlReactionTrigger_2.status;
    inputControlReactionTrigger_2->has_value = ((self->_lf__inputControlReactionTrigger_2.tmplt.token) != NULL && (self->_lf__inputControlReactionTrigger_2.tmplt.token)->value != NULL);
    _lf_replace_template_token((token_template_t*)inputControlReactionTrigger_2, (self->_lf__inputControlReactionTrigger_2.tmplt.token));
    Server.num_train_samples = self->_lf_Server.num_train_samples;
    Server.num_train_samples_width = self->_lf_Server.num_train_samples_width;
    #line 291 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    /*Correspondence: Range: [(290, 8), (293, 41)) -> Range: [(0, 0), (3, 41)) (verbatim=true; src=/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf)*/// **** This reaction is unordered.
    interval_t max_STP = 0LL;
    // Wait until the port status is known
    wait_until_port_status_known(3, max_STP);
}
#include "include/api/set_undef.h"
#include "include/api/set.h"
void server1967650907_mainreaction_function_7(void* instance_args) {
    _server1967650907_main_main_self_t* self = (_server1967650907_main_main_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    struct Server {
        serverreactor822540196_num_train_samples_t** num_train_samples;
    int num_train_samples_width;
    
    } Server;
    // Expose the action struct as a local variable whose name matches the action name.
    server1967650907_main_networkMessage_2_t* networkMessage_2 = &self->_lf_networkMessage_2;
    // Set the fields of the action struct to match the current trigger.
    networkMessage_2->is_present = (bool)self->_lf__networkMessage_2.status;
    networkMessage_2->has_value = ((self->_lf__networkMessage_2.tmplt.token) != NULL && (self->_lf__networkMessage_2.tmplt.token)->value != NULL);
    _lf_replace_template_token((token_template_t*)networkMessage_2, (self->_lf__networkMessage_2.tmplt.token));
    Server.num_train_samples = self->_lf_Server.num_train_samples;
    Server.num_train_samples_width = self->_lf_Server.num_train_samples_width;
    #line 299 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    /*Correspondence: Range: [(298, 8), (314, 27)) -> Range: [(0, 0), (16, 27)) (verbatim=true; src=/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf)*/// **** This reaction is unordered.
    // Acquire the GIL (Global Interpreter Lock) to be able to call Python APIs.
    PyGILState_STATE gstate;
    gstate = PyGILState_Ensure();
    // **** This reaction is unordered.
    Server.num_train_samples[1]->physical_time_of_arrival = self->_lf__networkMessage_2.physical_time_of_arrival;
    PyObject* message_byte_array = PyBytes_FromStringAndSize((char*)networkMessage_2->token->value, networkMessage_2->token->length);
    Py_XINCREF(message_byte_array);
    PyObject* deserialized_message = PyObject_CallMethod(global_pickler, "loads", "O", message_byte_array);
    if (deserialized_message == NULL) {
        if (PyErr_Occurred()) PyErr_Print();
        lf_print_error_and_exit("Could not deserialize deserialized_message.");
    }
    Py_XDECREF(message_byte_array);
    lf_set(Server.num_train_samples[1], deserialized_message);
    /* Release the thread. No Python API allowed beyond this point. */
    PyGILState_Release(gstate);
}
#include "include/api/set_undef.h"
#include "include/api/set.h"
void server1967650907_mainreaction_function_8(void* instance_args) {
    _server1967650907_main_main_self_t* self = (_server1967650907_main_main_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    struct Server {
        serverreactor822540196_global_parameter_t* global_parameter;
    
    } Server;
    Server.global_parameter = self->_lf_Server.global_parameter;
    #line 320 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    /*Correspondence: Range: [(319, 8), (341, 27)) -> Range: [(0, 0), (22, 27)) (verbatim=true; src=/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf)*/// **** This reaction is unordered.
    // Acquire the GIL (Global Interpreter Lock) to be able to call Python APIs.
    PyGILState_STATE gstate;
    gstate = PyGILState_Ensure();
    // **** This reaction is unordered.
    // Sending from Server.global_parameter in federate Server to client1.global_parameter in federate client1
    if (!Server.global_parameter->is_present) return;
    if (global_pickler == NULL) lf_print_error_and_exit("The pickle module is not loaded.");
    PyObject* serialized_pyobject = PyObject_CallMethod(global_pickler, "dumps", "O", Server.global_parameter->value);
    if (serialized_pyobject == NULL) {
        if (PyErr_Occurred()) PyErr_Print();
        lf_print_error_and_exit("Could not serialize serialized_pyobject.");
    }
    Py_buffer serialized_message;
    int returnValue = PyBytes_AsStringAndSize(serialized_pyobject, &serialized_message.buf, &serialized_message.len);
    if (returnValue == -1) {
        if (PyErr_Occurred()) PyErr_Print();
        lf_print_error_and_exit("Could not serialize serialized_message.");
    }
    size_t message_length = serialized_message.len;
    send_timed_message(0, MSG_TYPE_TAGGED_MESSAGE, 0, 0, "federate 0 via the RTI", message_length, serialized_message.buf);
    /* Release the thread. No Python API allowed beyond this point. */
    PyGILState_Release(gstate);
}
#include "include/api/set_undef.h"
#include "include/api/set.h"
void server1967650907_mainreaction_function_9(void* instance_args) {
    _server1967650907_main_main_self_t* self = (_server1967650907_main_main_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    struct Server {
        serverreactor822540196_global_parameter_t* global_parameter;
    
    } Server;
    Server.global_parameter = self->_lf_Server.global_parameter;
    #line 347 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    /*Correspondence: Range: [(346, 8), (368, 27)) -> Range: [(0, 0), (22, 27)) (verbatim=true; src=/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf)*/// **** This reaction is unordered.
    // Acquire the GIL (Global Interpreter Lock) to be able to call Python APIs.
    PyGILState_STATE gstate;
    gstate = PyGILState_Ensure();
    // **** This reaction is unordered.
    // Sending from Server.global_parameter in federate Server to client2.global_parameter in federate client2
    if (!Server.global_parameter->is_present) return;
    if (global_pickler == NULL) lf_print_error_and_exit("The pickle module is not loaded.");
    PyObject* serialized_pyobject = PyObject_CallMethod(global_pickler, "dumps", "O", Server.global_parameter->value);
    if (serialized_pyobject == NULL) {
        if (PyErr_Occurred()) PyErr_Print();
        lf_print_error_and_exit("Could not serialize serialized_pyobject.");
    }
    Py_buffer serialized_message;
    int returnValue = PyBytes_AsStringAndSize(serialized_pyobject, &serialized_message.buf, &serialized_message.len);
    if (returnValue == -1) {
        if (PyErr_Occurred()) PyErr_Print();
        lf_print_error_and_exit("Could not serialize serialized_message.");
    }
    size_t message_length = serialized_message.len;
    send_timed_message(0, MSG_TYPE_TAGGED_MESSAGE, 0, 1, "federate 1 via the RTI", message_length, serialized_message.buf);
    /* Release the thread. No Python API allowed beyond this point. */
    PyGILState_Release(gstate);
}
#include "include/api/set_undef.h"
_server1967650907_main_main_self_t* new_server1967650907_main() {
    _server1967650907_main_main_self_t* self = (_server1967650907_main_main_self_t*)_lf_new_reactor(sizeof(_server1967650907_main_main_self_t));
    #line 191 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf_inputControlReactionTrigger.trigger = &self->_lf__inputControlReactionTrigger;
    #line 192 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf_networkMessage.trigger = &self->_lf__networkMessage;
    #line 193 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf_inputControlReactionTrigger_0.trigger = &self->_lf__inputControlReactionTrigger_0;
    #line 194 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf_networkMessage_0.trigger = &self->_lf__networkMessage_0;
    #line 195 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf_inputControlReactionTrigger_1.trigger = &self->_lf__inputControlReactionTrigger_1;
    #line 196 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf_networkMessage_1.trigger = &self->_lf__networkMessage_1;
    #line 197 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf_inputControlReactionTrigger_2.trigger = &self->_lf__inputControlReactionTrigger_2;
    #line 198 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf_networkMessage_2.trigger = &self->_lf__networkMessage_2;
    // Set the _width variable for all cases. This will be -2
    // if the reactor is not a bank of reactors.
    self->_lf_Server_width = -2;
    #line 143 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 143 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf_Server.global_parameter_trigger.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 143 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 143 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf_Server.global_parameter_reactions[0] = &self->_lf__reaction_8;
    #line 143 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf_Server.global_parameter_reactions[1] = &self->_lf__reaction_9;
    #line 143 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf_Server.global_parameter_trigger.reactions = self->_lf_Server.global_parameter_reactions;
    #line 143 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf_Server.global_parameter_trigger.last = NULL;
    #line 143 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf_Server.global_parameter_trigger.number_of_reactions = 2;
    #line 143 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #ifdef FEDERATED
    #line 143 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf_Server.global_parameter_trigger.physical_time_of_arrival = NEVER;
    #line 143 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #endif // FEDERATED
    #line 201 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_0.number = 0;
    #line 201 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_0.function = server1967650907_mainreaction_function_0;
    #line 201 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_0.self = self;
    #line 201 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    #line 201 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_0.STP_handler = NULL;
    #line 201 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_0.name = "?";
    #line 201 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_0.mode = NULL;
    #line 209 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_1.number = 1;
    #line 209 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_1.function = server1967650907_mainreaction_function_1;
    #line 209 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_1.self = self;
    #line 209 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_1.deadline_violation_handler = NULL;
    #line 209 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_1.STP_handler = NULL;
    #line 209 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_1.name = "?";
    #line 209 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_1.mode = NULL;
    #line 230 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_2.number = 2;
    #line 230 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_2.function = server1967650907_mainreaction_function_2;
    #line 230 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_2.self = self;
    #line 230 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_2.deadline_violation_handler = NULL;
    #line 230 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_2.STP_handler = NULL;
    #line 230 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_2.name = "?";
    #line 230 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_2.mode = NULL;
    #line 238 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_3.number = 3;
    #line 238 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_3.function = server1967650907_mainreaction_function_3;
    #line 238 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_3.self = self;
    #line 238 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_3.deadline_violation_handler = NULL;
    #line 238 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_3.STP_handler = NULL;
    #line 238 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_3.name = "?";
    #line 238 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_3.mode = NULL;
    #line 259 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_4.number = 4;
    #line 259 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_4.function = server1967650907_mainreaction_function_4;
    #line 259 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_4.self = self;
    #line 259 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_4.deadline_violation_handler = NULL;
    #line 259 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_4.STP_handler = NULL;
    #line 259 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_4.name = "?";
    #line 259 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_4.mode = NULL;
    #line 267 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_5.number = 5;
    #line 267 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_5.function = server1967650907_mainreaction_function_5;
    #line 267 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_5.self = self;
    #line 267 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_5.deadline_violation_handler = NULL;
    #line 267 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_5.STP_handler = NULL;
    #line 267 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_5.name = "?";
    #line 267 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_5.mode = NULL;
    #line 288 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_6.number = 6;
    #line 288 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_6.function = server1967650907_mainreaction_function_6;
    #line 288 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_6.self = self;
    #line 288 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_6.deadline_violation_handler = NULL;
    #line 288 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_6.STP_handler = NULL;
    #line 288 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_6.name = "?";
    #line 288 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_6.mode = NULL;
    #line 296 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_7.number = 7;
    #line 296 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_7.function = server1967650907_mainreaction_function_7;
    #line 296 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_7.self = self;
    #line 296 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_7.deadline_violation_handler = NULL;
    #line 296 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_7.STP_handler = NULL;
    #line 296 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_7.name = "?";
    #line 296 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_7.mode = NULL;
    #line 317 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_8.number = 8;
    #line 317 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_8.function = server1967650907_mainreaction_function_8;
    #line 317 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_8.self = self;
    #line 317 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_8.deadline_violation_handler = NULL;
    #line 317 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_8.STP_handler = NULL;
    #line 317 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_8.name = "?";
    #line 317 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_8.mode = NULL;
    #line 344 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_9.number = 9;
    #line 344 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_9.function = server1967650907_mainreaction_function_9;
    #line 344 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_9.self = self;
    #line 344 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_9.deadline_violation_handler = NULL;
    #line 344 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_9.STP_handler = NULL;
    #line 344 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_9.name = "?";
    #line 344 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_9.mode = NULL;
    #line 191 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__inputControlReactionTrigger.last = NULL;
    #line 191 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 191 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__inputControlReactionTrigger.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 191 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 191 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #line 191 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__inputControlReactionTrigger_reactions[0] = &self->_lf__reaction_0;
    #line 191 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__inputControlReactionTrigger.reactions = &self->_lf__inputControlReactionTrigger_reactions[0];
    #line 191 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__inputControlReactionTrigger.number_of_reactions = 1;
    #line 191 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #ifdef FEDERATED
    #line 191 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__inputControlReactionTrigger.physical_time_of_arrival = NEVER;
    #line 191 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #endif // FEDERATED
    self->_lf__inputControlReactionTrigger.is_physical = false;
    
    self->_lf__inputControlReactionTrigger.tmplt.type.element_size = 0;
    self->_lf_inputControlReactionTrigger.type.element_size = 0;
    #line 192 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__networkMessage.last = NULL;
    #line 192 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 192 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__networkMessage.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 192 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 192 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #line 192 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__networkMessage_reactions[0] = &self->_lf__reaction_1;
    #line 192 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__networkMessage.reactions = &self->_lf__networkMessage_reactions[0];
    #line 192 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__networkMessage.number_of_reactions = 1;
    #line 192 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #ifdef FEDERATED
    #line 192 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__networkMessage.physical_time_of_arrival = NEVER;
    #line 192 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #endif // FEDERATED
    self->_lf__networkMessage.is_physical = false;
    
    self->_lf__networkMessage.tmplt.type.element_size = 0;
    self->_lf_networkMessage.type.element_size = 0;
    #line 193 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__inputControlReactionTrigger_0.last = NULL;
    #line 193 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 193 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__inputControlReactionTrigger_0.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 193 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 193 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #line 193 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__inputControlReactionTrigger_0_reactions[0] = &self->_lf__reaction_2;
    #line 193 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__inputControlReactionTrigger_0.reactions = &self->_lf__inputControlReactionTrigger_0_reactions[0];
    #line 193 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__inputControlReactionTrigger_0.number_of_reactions = 1;
    #line 193 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #ifdef FEDERATED
    #line 193 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__inputControlReactionTrigger_0.physical_time_of_arrival = NEVER;
    #line 193 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #endif // FEDERATED
    self->_lf__inputControlReactionTrigger_0.is_physical = false;
    
    self->_lf__inputControlReactionTrigger_0.tmplt.type.element_size = 0;
    self->_lf_inputControlReactionTrigger_0.type.element_size = 0;
    #line 194 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__networkMessage_0.last = NULL;
    #line 194 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 194 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__networkMessage_0.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 194 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 194 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #line 194 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__networkMessage_0_reactions[0] = &self->_lf__reaction_3;
    #line 194 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__networkMessage_0.reactions = &self->_lf__networkMessage_0_reactions[0];
    #line 194 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__networkMessage_0.number_of_reactions = 1;
    #line 194 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #ifdef FEDERATED
    #line 194 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__networkMessage_0.physical_time_of_arrival = NEVER;
    #line 194 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #endif // FEDERATED
    self->_lf__networkMessage_0.is_physical = false;
    
    self->_lf__networkMessage_0.tmplt.type.element_size = 0;
    self->_lf_networkMessage_0.type.element_size = 0;
    #line 195 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__inputControlReactionTrigger_1.last = NULL;
    #line 195 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 195 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__inputControlReactionTrigger_1.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 195 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 195 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #line 195 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__inputControlReactionTrigger_1_reactions[0] = &self->_lf__reaction_4;
    #line 195 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__inputControlReactionTrigger_1.reactions = &self->_lf__inputControlReactionTrigger_1_reactions[0];
    #line 195 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__inputControlReactionTrigger_1.number_of_reactions = 1;
    #line 195 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #ifdef FEDERATED
    #line 195 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__inputControlReactionTrigger_1.physical_time_of_arrival = NEVER;
    #line 195 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #endif // FEDERATED
    self->_lf__inputControlReactionTrigger_1.is_physical = false;
    
    self->_lf__inputControlReactionTrigger_1.tmplt.type.element_size = 0;
    self->_lf_inputControlReactionTrigger_1.type.element_size = 0;
    #line 196 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__networkMessage_1.last = NULL;
    #line 196 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 196 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__networkMessage_1.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 196 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 196 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #line 196 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__networkMessage_1_reactions[0] = &self->_lf__reaction_5;
    #line 196 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__networkMessage_1.reactions = &self->_lf__networkMessage_1_reactions[0];
    #line 196 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__networkMessage_1.number_of_reactions = 1;
    #line 196 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #ifdef FEDERATED
    #line 196 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__networkMessage_1.physical_time_of_arrival = NEVER;
    #line 196 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #endif // FEDERATED
    self->_lf__networkMessage_1.is_physical = false;
    
    self->_lf__networkMessage_1.tmplt.type.element_size = 0;
    self->_lf_networkMessage_1.type.element_size = 0;
    #line 197 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__inputControlReactionTrigger_2.last = NULL;
    #line 197 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 197 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__inputControlReactionTrigger_2.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 197 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 197 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #line 197 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__inputControlReactionTrigger_2_reactions[0] = &self->_lf__reaction_6;
    #line 197 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__inputControlReactionTrigger_2.reactions = &self->_lf__inputControlReactionTrigger_2_reactions[0];
    #line 197 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__inputControlReactionTrigger_2.number_of_reactions = 1;
    #line 197 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #ifdef FEDERATED
    #line 197 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__inputControlReactionTrigger_2.physical_time_of_arrival = NEVER;
    #line 197 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #endif // FEDERATED
    self->_lf__inputControlReactionTrigger_2.is_physical = false;
    
    self->_lf__inputControlReactionTrigger_2.tmplt.type.element_size = 0;
    self->_lf_inputControlReactionTrigger_2.type.element_size = 0;
    #line 198 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__networkMessage_2.last = NULL;
    #line 198 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 198 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__networkMessage_2.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 198 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 198 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #line 198 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__networkMessage_2_reactions[0] = &self->_lf__reaction_7;
    #line 198 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__networkMessage_2.reactions = &self->_lf__networkMessage_2_reactions[0];
    #line 198 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__networkMessage_2.number_of_reactions = 1;
    #line 198 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #ifdef FEDERATED
    #line 198 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__networkMessage_2.physical_time_of_arrival = NEVER;
    #line 198 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #endif // FEDERATED
    self->_lf__networkMessage_2.is_physical = false;
    
    self->_lf__networkMessage_2.tmplt.type.element_size = 0;
    self->_lf_networkMessage_2.type.element_size = 0;
    return self;
}
