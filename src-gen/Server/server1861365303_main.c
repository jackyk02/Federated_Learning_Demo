#include "include/api/api.h"
#include "include/api/set.h"
#include "include/Server/Server.h"
#include "server1861365303_main.h"
#include "include/api/set.h"
void server1861365303_mainreaction_function_0(void* instance_args) {
    _server1861365303_main_main_self_t* self = (_server1861365303_main_main_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    struct Server {
        serverreactor437838088_updated_parameters_t** updated_parameters;
    int updated_parameters_width;
    
    } Server;
    // Expose the action struct as a local variable whose name matches the action name.
    server1861365303_main_inputControlReactionTrigger_t* inputControlReactionTrigger = &self->_lf_inputControlReactionTrigger;
    // Set the fields of the action struct to match the current trigger.
    inputControlReactionTrigger->is_present = (bool)self->_lf__inputControlReactionTrigger.status;
    inputControlReactionTrigger->has_value = ((self->_lf__inputControlReactionTrigger.tmplt.token) != NULL && (self->_lf__inputControlReactionTrigger.tmplt.token)->value != NULL);
    _lf_replace_template_token((token_template_t*)inputControlReactionTrigger, (self->_lf__inputControlReactionTrigger.tmplt.token));
    Server.updated_parameters = self->_lf_Server.updated_parameters;
    Server.updated_parameters_width = self->_lf_Server.updated_parameters_width;
    #line 202 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    /*Correspondence: Range: [(201, 8), (204, 41)) -> Range: [(0, 0), (3, 41)) (verbatim=true; src=/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf)*/// **** This reaction is unordered.
    interval_t max_STP = 0LL;
    // Wait until the port status is known
    wait_until_port_status_known(0, max_STP);
}
#include "include/api/set_undef.h"
#include "include/api/set.h"
void server1861365303_mainreaction_function_1(void* instance_args) {
    _server1861365303_main_main_self_t* self = (_server1861365303_main_main_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    struct Server {
        serverreactor437838088_updated_parameters_t** updated_parameters;
    int updated_parameters_width;
    
    } Server;
    // Expose the action struct as a local variable whose name matches the action name.
    server1861365303_main_networkMessage_t* networkMessage = &self->_lf_networkMessage;
    // Set the fields of the action struct to match the current trigger.
    networkMessage->is_present = (bool)self->_lf__networkMessage.status;
    networkMessage->has_value = ((self->_lf__networkMessage.tmplt.token) != NULL && (self->_lf__networkMessage.tmplt.token)->value != NULL);
    _lf_replace_template_token((token_template_t*)networkMessage, (self->_lf__networkMessage.tmplt.token));
    Server.updated_parameters = self->_lf_Server.updated_parameters;
    Server.updated_parameters_width = self->_lf_Server.updated_parameters_width;
    #line 210 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    /*Correspondence: Range: [(209, 8), (225, 27)) -> Range: [(0, 0), (16, 27)) (verbatim=true; src=/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf)*/// **** This reaction is unordered.
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
void server1861365303_mainreaction_function_2(void* instance_args) {
    _server1861365303_main_main_self_t* self = (_server1861365303_main_main_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    struct Server {
        serverreactor437838088_num_train_samples_t** num_train_samples;
    int num_train_samples_width;
    
    } Server;
    // Expose the action struct as a local variable whose name matches the action name.
    server1861365303_main_inputControlReactionTrigger_0_t* inputControlReactionTrigger_0 = &self->_lf_inputControlReactionTrigger_0;
    // Set the fields of the action struct to match the current trigger.
    inputControlReactionTrigger_0->is_present = (bool)self->_lf__inputControlReactionTrigger_0.status;
    inputControlReactionTrigger_0->has_value = ((self->_lf__inputControlReactionTrigger_0.tmplt.token) != NULL && (self->_lf__inputControlReactionTrigger_0.tmplt.token)->value != NULL);
    _lf_replace_template_token((token_template_t*)inputControlReactionTrigger_0, (self->_lf__inputControlReactionTrigger_0.tmplt.token));
    Server.num_train_samples = self->_lf_Server.num_train_samples;
    Server.num_train_samples_width = self->_lf_Server.num_train_samples_width;
    #line 231 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    /*Correspondence: Range: [(230, 8), (233, 41)) -> Range: [(0, 0), (3, 41)) (verbatim=true; src=/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf)*/// **** This reaction is unordered.
    interval_t max_STP = 0LL;
    // Wait until the port status is known
    wait_until_port_status_known(1, max_STP);
}
#include "include/api/set_undef.h"
#include "include/api/set.h"
void server1861365303_mainreaction_function_3(void* instance_args) {
    _server1861365303_main_main_self_t* self = (_server1861365303_main_main_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    struct Server {
        serverreactor437838088_num_train_samples_t** num_train_samples;
    int num_train_samples_width;
    
    } Server;
    // Expose the action struct as a local variable whose name matches the action name.
    server1861365303_main_networkMessage_0_t* networkMessage_0 = &self->_lf_networkMessage_0;
    // Set the fields of the action struct to match the current trigger.
    networkMessage_0->is_present = (bool)self->_lf__networkMessage_0.status;
    networkMessage_0->has_value = ((self->_lf__networkMessage_0.tmplt.token) != NULL && (self->_lf__networkMessage_0.tmplt.token)->value != NULL);
    _lf_replace_template_token((token_template_t*)networkMessage_0, (self->_lf__networkMessage_0.tmplt.token));
    Server.num_train_samples = self->_lf_Server.num_train_samples;
    Server.num_train_samples_width = self->_lf_Server.num_train_samples_width;
    #line 239 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    /*Correspondence: Range: [(238, 8), (254, 27)) -> Range: [(0, 0), (16, 27)) (verbatim=true; src=/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf)*/// **** This reaction is unordered.
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
void server1861365303_mainreaction_function_4(void* instance_args) {
    _server1861365303_main_main_self_t* self = (_server1861365303_main_main_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    struct Server {
        serverreactor437838088_updated_parameters_t** updated_parameters;
    int updated_parameters_width;
    
    } Server;
    // Expose the action struct as a local variable whose name matches the action name.
    server1861365303_main_inputControlReactionTrigger_1_t* inputControlReactionTrigger_1 = &self->_lf_inputControlReactionTrigger_1;
    // Set the fields of the action struct to match the current trigger.
    inputControlReactionTrigger_1->is_present = (bool)self->_lf__inputControlReactionTrigger_1.status;
    inputControlReactionTrigger_1->has_value = ((self->_lf__inputControlReactionTrigger_1.tmplt.token) != NULL && (self->_lf__inputControlReactionTrigger_1.tmplt.token)->value != NULL);
    _lf_replace_template_token((token_template_t*)inputControlReactionTrigger_1, (self->_lf__inputControlReactionTrigger_1.tmplt.token));
    Server.updated_parameters = self->_lf_Server.updated_parameters;
    Server.updated_parameters_width = self->_lf_Server.updated_parameters_width;
    #line 260 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    /*Correspondence: Range: [(259, 8), (262, 41)) -> Range: [(0, 0), (3, 41)) (verbatim=true; src=/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf)*/// **** This reaction is unordered.
    interval_t max_STP = 0LL;
    // Wait until the port status is known
    wait_until_port_status_known(2, max_STP);
}
#include "include/api/set_undef.h"
#include "include/api/set.h"
void server1861365303_mainreaction_function_5(void* instance_args) {
    _server1861365303_main_main_self_t* self = (_server1861365303_main_main_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    struct Server {
        serverreactor437838088_updated_parameters_t** updated_parameters;
    int updated_parameters_width;
    
    } Server;
    // Expose the action struct as a local variable whose name matches the action name.
    server1861365303_main_networkMessage_1_t* networkMessage_1 = &self->_lf_networkMessage_1;
    // Set the fields of the action struct to match the current trigger.
    networkMessage_1->is_present = (bool)self->_lf__networkMessage_1.status;
    networkMessage_1->has_value = ((self->_lf__networkMessage_1.tmplt.token) != NULL && (self->_lf__networkMessage_1.tmplt.token)->value != NULL);
    _lf_replace_template_token((token_template_t*)networkMessage_1, (self->_lf__networkMessage_1.tmplt.token));
    Server.updated_parameters = self->_lf_Server.updated_parameters;
    Server.updated_parameters_width = self->_lf_Server.updated_parameters_width;
    #line 268 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    /*Correspondence: Range: [(267, 8), (283, 27)) -> Range: [(0, 0), (16, 27)) (verbatim=true; src=/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf)*/// **** This reaction is unordered.
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
void server1861365303_mainreaction_function_6(void* instance_args) {
    _server1861365303_main_main_self_t* self = (_server1861365303_main_main_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    struct Server {
        serverreactor437838088_num_train_samples_t** num_train_samples;
    int num_train_samples_width;
    
    } Server;
    // Expose the action struct as a local variable whose name matches the action name.
    server1861365303_main_inputControlReactionTrigger_2_t* inputControlReactionTrigger_2 = &self->_lf_inputControlReactionTrigger_2;
    // Set the fields of the action struct to match the current trigger.
    inputControlReactionTrigger_2->is_present = (bool)self->_lf__inputControlReactionTrigger_2.status;
    inputControlReactionTrigger_2->has_value = ((self->_lf__inputControlReactionTrigger_2.tmplt.token) != NULL && (self->_lf__inputControlReactionTrigger_2.tmplt.token)->value != NULL);
    _lf_replace_template_token((token_template_t*)inputControlReactionTrigger_2, (self->_lf__inputControlReactionTrigger_2.tmplt.token));
    Server.num_train_samples = self->_lf_Server.num_train_samples;
    Server.num_train_samples_width = self->_lf_Server.num_train_samples_width;
    #line 289 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    /*Correspondence: Range: [(288, 8), (291, 41)) -> Range: [(0, 0), (3, 41)) (verbatim=true; src=/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf)*/// **** This reaction is unordered.
    interval_t max_STP = 0LL;
    // Wait until the port status is known
    wait_until_port_status_known(3, max_STP);
}
#include "include/api/set_undef.h"
#include "include/api/set.h"
void server1861365303_mainreaction_function_7(void* instance_args) {
    _server1861365303_main_main_self_t* self = (_server1861365303_main_main_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    struct Server {
        serverreactor437838088_num_train_samples_t** num_train_samples;
    int num_train_samples_width;
    
    } Server;
    // Expose the action struct as a local variable whose name matches the action name.
    server1861365303_main_networkMessage_2_t* networkMessage_2 = &self->_lf_networkMessage_2;
    // Set the fields of the action struct to match the current trigger.
    networkMessage_2->is_present = (bool)self->_lf__networkMessage_2.status;
    networkMessage_2->has_value = ((self->_lf__networkMessage_2.tmplt.token) != NULL && (self->_lf__networkMessage_2.tmplt.token)->value != NULL);
    _lf_replace_template_token((token_template_t*)networkMessage_2, (self->_lf__networkMessage_2.tmplt.token));
    Server.num_train_samples = self->_lf_Server.num_train_samples;
    Server.num_train_samples_width = self->_lf_Server.num_train_samples_width;
    #line 297 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    /*Correspondence: Range: [(296, 8), (312, 27)) -> Range: [(0, 0), (16, 27)) (verbatim=true; src=/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf)*/// **** This reaction is unordered.
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
void server1861365303_mainreaction_function_8(void* instance_args) {
    _server1861365303_main_main_self_t* self = (_server1861365303_main_main_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    struct Server {
        serverreactor437838088_global_parameter_t* global_parameter;
    
    } Server;
    Server.global_parameter = self->_lf_Server.global_parameter;
    #line 318 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    /*Correspondence: Range: [(317, 8), (339, 27)) -> Range: [(0, 0), (22, 27)) (verbatim=true; src=/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf)*/// **** This reaction is unordered.
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
void server1861365303_mainreaction_function_9(void* instance_args) {
    _server1861365303_main_main_self_t* self = (_server1861365303_main_main_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    struct Server {
        serverreactor437838088_global_parameter_t* global_parameter;
    
    } Server;
    Server.global_parameter = self->_lf_Server.global_parameter;
    #line 345 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    /*Correspondence: Range: [(344, 8), (366, 27)) -> Range: [(0, 0), (22, 27)) (verbatim=true; src=/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf)*/// **** This reaction is unordered.
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
_server1861365303_main_main_self_t* new_server1861365303_main() {
    _server1861365303_main_main_self_t* self = (_server1861365303_main_main_self_t*)_lf_new_reactor(sizeof(_server1861365303_main_main_self_t));
    #line 189 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf_inputControlReactionTrigger.trigger = &self->_lf__inputControlReactionTrigger;
    #line 190 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf_networkMessage.trigger = &self->_lf__networkMessage;
    #line 191 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf_inputControlReactionTrigger_0.trigger = &self->_lf__inputControlReactionTrigger_0;
    #line 192 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf_networkMessage_0.trigger = &self->_lf__networkMessage_0;
    #line 193 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf_inputControlReactionTrigger_1.trigger = &self->_lf__inputControlReactionTrigger_1;
    #line 194 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf_networkMessage_1.trigger = &self->_lf__networkMessage_1;
    #line 195 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf_inputControlReactionTrigger_2.trigger = &self->_lf__inputControlReactionTrigger_2;
    #line 196 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
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
    #line 199 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_0.number = 0;
    #line 199 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_0.function = server1861365303_mainreaction_function_0;
    #line 199 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_0.self = self;
    #line 199 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    #line 199 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_0.STP_handler = NULL;
    #line 199 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_0.name = "?";
    #line 199 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_0.mode = NULL;
    #line 207 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_1.number = 1;
    #line 207 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_1.function = server1861365303_mainreaction_function_1;
    #line 207 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_1.self = self;
    #line 207 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_1.deadline_violation_handler = NULL;
    #line 207 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_1.STP_handler = NULL;
    #line 207 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_1.name = "?";
    #line 207 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_1.mode = NULL;
    #line 228 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_2.number = 2;
    #line 228 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_2.function = server1861365303_mainreaction_function_2;
    #line 228 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_2.self = self;
    #line 228 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_2.deadline_violation_handler = NULL;
    #line 228 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_2.STP_handler = NULL;
    #line 228 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_2.name = "?";
    #line 228 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_2.mode = NULL;
    #line 236 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_3.number = 3;
    #line 236 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_3.function = server1861365303_mainreaction_function_3;
    #line 236 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_3.self = self;
    #line 236 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_3.deadline_violation_handler = NULL;
    #line 236 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_3.STP_handler = NULL;
    #line 236 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_3.name = "?";
    #line 236 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_3.mode = NULL;
    #line 257 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_4.number = 4;
    #line 257 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_4.function = server1861365303_mainreaction_function_4;
    #line 257 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_4.self = self;
    #line 257 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_4.deadline_violation_handler = NULL;
    #line 257 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_4.STP_handler = NULL;
    #line 257 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_4.name = "?";
    #line 257 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_4.mode = NULL;
    #line 265 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_5.number = 5;
    #line 265 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_5.function = server1861365303_mainreaction_function_5;
    #line 265 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_5.self = self;
    #line 265 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_5.deadline_violation_handler = NULL;
    #line 265 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_5.STP_handler = NULL;
    #line 265 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_5.name = "?";
    #line 265 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_5.mode = NULL;
    #line 286 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_6.number = 6;
    #line 286 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_6.function = server1861365303_mainreaction_function_6;
    #line 286 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_6.self = self;
    #line 286 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_6.deadline_violation_handler = NULL;
    #line 286 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_6.STP_handler = NULL;
    #line 286 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_6.name = "?";
    #line 286 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_6.mode = NULL;
    #line 294 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_7.number = 7;
    #line 294 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_7.function = server1861365303_mainreaction_function_7;
    #line 294 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_7.self = self;
    #line 294 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_7.deadline_violation_handler = NULL;
    #line 294 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_7.STP_handler = NULL;
    #line 294 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_7.name = "?";
    #line 294 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_7.mode = NULL;
    #line 315 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_8.number = 8;
    #line 315 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_8.function = server1861365303_mainreaction_function_8;
    #line 315 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_8.self = self;
    #line 315 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_8.deadline_violation_handler = NULL;
    #line 315 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_8.STP_handler = NULL;
    #line 315 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_8.name = "?";
    #line 315 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_8.mode = NULL;
    #line 342 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_9.number = 9;
    #line 342 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_9.function = server1861365303_mainreaction_function_9;
    #line 342 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_9.self = self;
    #line 342 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_9.deadline_violation_handler = NULL;
    #line 342 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_9.STP_handler = NULL;
    #line 342 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_9.name = "?";
    #line 342 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__reaction_9.mode = NULL;
    #line 189 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__inputControlReactionTrigger.last = NULL;
    #line 189 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 189 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__inputControlReactionTrigger.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 189 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 189 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #line 189 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__inputControlReactionTrigger_reactions[0] = &self->_lf__reaction_0;
    #line 189 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__inputControlReactionTrigger.reactions = &self->_lf__inputControlReactionTrigger_reactions[0];
    #line 189 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__inputControlReactionTrigger.number_of_reactions = 1;
    #line 189 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #ifdef FEDERATED
    #line 189 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__inputControlReactionTrigger.physical_time_of_arrival = NEVER;
    #line 189 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #endif // FEDERATED
    self->_lf__inputControlReactionTrigger.is_physical = false;
    
    self->_lf__inputControlReactionTrigger.tmplt.type.element_size = 0;
    self->_lf_inputControlReactionTrigger.type.element_size = 0;
    #line 190 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__networkMessage.last = NULL;
    #line 190 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 190 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__networkMessage.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 190 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 190 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #line 190 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__networkMessage_reactions[0] = &self->_lf__reaction_1;
    #line 190 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__networkMessage.reactions = &self->_lf__networkMessage_reactions[0];
    #line 190 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__networkMessage.number_of_reactions = 1;
    #line 190 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #ifdef FEDERATED
    #line 190 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__networkMessage.physical_time_of_arrival = NEVER;
    #line 190 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #endif // FEDERATED
    self->_lf__networkMessage.is_physical = false;
    
    self->_lf__networkMessage.tmplt.type.element_size = 0;
    self->_lf_networkMessage.type.element_size = 0;
    #line 191 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__inputControlReactionTrigger_0.last = NULL;
    #line 191 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 191 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__inputControlReactionTrigger_0.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 191 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 191 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #line 191 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__inputControlReactionTrigger_0_reactions[0] = &self->_lf__reaction_2;
    #line 191 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__inputControlReactionTrigger_0.reactions = &self->_lf__inputControlReactionTrigger_0_reactions[0];
    #line 191 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__inputControlReactionTrigger_0.number_of_reactions = 1;
    #line 191 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #ifdef FEDERATED
    #line 191 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__inputControlReactionTrigger_0.physical_time_of_arrival = NEVER;
    #line 191 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #endif // FEDERATED
    self->_lf__inputControlReactionTrigger_0.is_physical = false;
    
    self->_lf__inputControlReactionTrigger_0.tmplt.type.element_size = 0;
    self->_lf_inputControlReactionTrigger_0.type.element_size = 0;
    #line 192 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__networkMessage_0.last = NULL;
    #line 192 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 192 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__networkMessage_0.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 192 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 192 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #line 192 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__networkMessage_0_reactions[0] = &self->_lf__reaction_3;
    #line 192 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__networkMessage_0.reactions = &self->_lf__networkMessage_0_reactions[0];
    #line 192 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__networkMessage_0.number_of_reactions = 1;
    #line 192 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #ifdef FEDERATED
    #line 192 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__networkMessage_0.physical_time_of_arrival = NEVER;
    #line 192 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #endif // FEDERATED
    self->_lf__networkMessage_0.is_physical = false;
    
    self->_lf__networkMessage_0.tmplt.type.element_size = 0;
    self->_lf_networkMessage_0.type.element_size = 0;
    #line 193 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__inputControlReactionTrigger_1.last = NULL;
    #line 193 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 193 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__inputControlReactionTrigger_1.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 193 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 193 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #line 193 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__inputControlReactionTrigger_1_reactions[0] = &self->_lf__reaction_4;
    #line 193 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__inputControlReactionTrigger_1.reactions = &self->_lf__inputControlReactionTrigger_1_reactions[0];
    #line 193 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__inputControlReactionTrigger_1.number_of_reactions = 1;
    #line 193 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #ifdef FEDERATED
    #line 193 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__inputControlReactionTrigger_1.physical_time_of_arrival = NEVER;
    #line 193 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #endif // FEDERATED
    self->_lf__inputControlReactionTrigger_1.is_physical = false;
    
    self->_lf__inputControlReactionTrigger_1.tmplt.type.element_size = 0;
    self->_lf_inputControlReactionTrigger_1.type.element_size = 0;
    #line 194 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__networkMessage_1.last = NULL;
    #line 194 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 194 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__networkMessage_1.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 194 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 194 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #line 194 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__networkMessage_1_reactions[0] = &self->_lf__reaction_5;
    #line 194 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__networkMessage_1.reactions = &self->_lf__networkMessage_1_reactions[0];
    #line 194 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__networkMessage_1.number_of_reactions = 1;
    #line 194 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #ifdef FEDERATED
    #line 194 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__networkMessage_1.physical_time_of_arrival = NEVER;
    #line 194 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #endif // FEDERATED
    self->_lf__networkMessage_1.is_physical = false;
    
    self->_lf__networkMessage_1.tmplt.type.element_size = 0;
    self->_lf_networkMessage_1.type.element_size = 0;
    #line 195 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__inputControlReactionTrigger_2.last = NULL;
    #line 195 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 195 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__inputControlReactionTrigger_2.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 195 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 195 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #line 195 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__inputControlReactionTrigger_2_reactions[0] = &self->_lf__reaction_6;
    #line 195 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__inputControlReactionTrigger_2.reactions = &self->_lf__inputControlReactionTrigger_2_reactions[0];
    #line 195 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__inputControlReactionTrigger_2.number_of_reactions = 1;
    #line 195 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #ifdef FEDERATED
    #line 195 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__inputControlReactionTrigger_2.physical_time_of_arrival = NEVER;
    #line 195 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #endif // FEDERATED
    self->_lf__inputControlReactionTrigger_2.is_physical = false;
    
    self->_lf__inputControlReactionTrigger_2.tmplt.type.element_size = 0;
    self->_lf_inputControlReactionTrigger_2.type.element_size = 0;
    #line 196 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__networkMessage_2.last = NULL;
    #line 196 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 196 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__networkMessage_2.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 196 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 196 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #line 196 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__networkMessage_2_reactions[0] = &self->_lf__reaction_7;
    #line 196 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__networkMessage_2.reactions = &self->_lf__networkMessage_2_reactions[0];
    #line 196 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__networkMessage_2.number_of_reactions = 1;
    #line 196 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #ifdef FEDERATED
    #line 196 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    self->_lf__networkMessage_2.physical_time_of_arrival = NEVER;
    #line 196 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/Server.lf"
    #endif // FEDERATED
    self->_lf__networkMessage_2.is_physical = false;
    
    self->_lf__networkMessage_2.tmplt.type.element_size = 0;
    self->_lf_networkMessage_2.type.element_size = 0;
    return self;
}
