#include "include/api/api.h"
#include "include/api/set.h"
#include "include/client1/client1.h"
#include "client1646705513_main.h"
#include "include/api/set.h"
void client1646705513_mainreaction_function_0(void* instance_args) {
    _client1646705513_main_main_self_t* self = (_client1646705513_main_main_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    struct client1 {
        clientreactor447326045_updated_parameters_t* updated_parameters;
    
    } client1;
    client1.updated_parameters = self->_lf_client1.updated_parameters;
    #line 176 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    /*Correspondence: Range: [(175, 8), (197, 27)) -> Range: [(0, 0), (22, 27)) (verbatim=true; src=/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf)*/// **** This reaction is unordered.
    // Acquire the GIL (Global Interpreter Lock) to be able to call Python APIs.
    PyGILState_STATE gstate;
    gstate = PyGILState_Ensure();
    // **** This reaction is unordered.
    // Sending from client1.updated_parameters in federate client1 to Server.updated_parameters in federate Server
    if (!client1.updated_parameters->is_present) return;
    if (global_pickler == NULL) lf_print_error_and_exit("The pickle module is not loaded.");
    PyObject* serialized_pyobject = PyObject_CallMethod(global_pickler, "dumps", "O", client1.updated_parameters->value);
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
    send_timed_message(NEVER, MSG_TYPE_TAGGED_MESSAGE, 0, 2, "federate 2 via the RTI", message_length, serialized_message.buf);
    /* Release the thread. No Python API allowed beyond this point. */
    PyGILState_Release(gstate);
}
#include "include/api/set_undef.h"
#include "include/api/set.h"
void client1646705513_mainreaction_function_1(void* instance_args) {
    _client1646705513_main_main_self_t* self = (_client1646705513_main_main_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    struct client1 {
        clientreactor447326045_updated_parameters_t* updated_parameters;
    
    } client1;
    // Expose the action struct as a local variable whose name matches the action name.
    client1646705513_main_outputControlReactionTrigger_t* outputControlReactionTrigger = &self->_lf_outputControlReactionTrigger;
    // Set the fields of the action struct to match the current trigger.
    outputControlReactionTrigger->is_present = (bool)self->_lf__outputControlReactionTrigger.status;
    outputControlReactionTrigger->has_value = ((self->_lf__outputControlReactionTrigger.tmplt.token) != NULL && (self->_lf__outputControlReactionTrigger.tmplt.token)->value != NULL);
    _lf_replace_template_token((token_template_t*)outputControlReactionTrigger, (self->_lf__outputControlReactionTrigger.tmplt.token));
    client1.updated_parameters = self->_lf_client1.updated_parameters;
    #line 203 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    /*Correspondence: Range: [(202, 8), (211, 1)) -> Range: [(0, 0), (9, 1)) (verbatim=true; src=/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf)*/// **** This reaction is unordered.
    // If the output port has not been lf_set for the current logical time,
    // send an ABSENT message to the receiving federate
    LF_PRINT_LOG("Contemplating whether to send port "
              "absent for port %d to federate %d.",
              0, 2);
    if (client1.updated_parameters == NULL || !client1.updated_parameters->is_present) {
        // The output port is NULL or it is not present.
        send_port_absent_to_federate(NEVER, 0, 2);
    }
}
#include "include/api/set_undef.h"
#include "include/api/set.h"
void client1646705513_mainreaction_function_2(void* instance_args) {
    _client1646705513_main_main_self_t* self = (_client1646705513_main_main_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    struct client1 {
        clientreactor447326045_num_train_samples_t* num_train_samples;
    
    } client1;
    client1.num_train_samples = self->_lf_client1.num_train_samples;
    #line 217 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    /*Correspondence: Range: [(216, 8), (238, 27)) -> Range: [(0, 0), (22, 27)) (verbatim=true; src=/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf)*/// **** This reaction is unordered.
    // Acquire the GIL (Global Interpreter Lock) to be able to call Python APIs.
    PyGILState_STATE gstate;
    gstate = PyGILState_Ensure();
    // **** This reaction is unordered.
    // Sending from client1.num_train_samples in federate client1 to Server.num_train_samples in federate Server
    if (!client1.num_train_samples->is_present) return;
    if (global_pickler == NULL) lf_print_error_and_exit("The pickle module is not loaded.");
    PyObject* serialized_pyobject = PyObject_CallMethod(global_pickler, "dumps", "O", client1.num_train_samples->value);
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
    send_timed_message(NEVER, MSG_TYPE_TAGGED_MESSAGE, 1, 2, "federate 2 via the RTI", message_length, serialized_message.buf);
    /* Release the thread. No Python API allowed beyond this point. */
    PyGILState_Release(gstate);
}
#include "include/api/set_undef.h"
#include "include/api/set.h"
void client1646705513_mainreaction_function_3(void* instance_args) {
    _client1646705513_main_main_self_t* self = (_client1646705513_main_main_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    struct client1 {
        clientreactor447326045_num_train_samples_t* num_train_samples;
    
    } client1;
    // Expose the action struct as a local variable whose name matches the action name.
    client1646705513_main_outputControlReactionTrigger_t* outputControlReactionTrigger = &self->_lf_outputControlReactionTrigger;
    // Set the fields of the action struct to match the current trigger.
    outputControlReactionTrigger->is_present = (bool)self->_lf__outputControlReactionTrigger.status;
    outputControlReactionTrigger->has_value = ((self->_lf__outputControlReactionTrigger.tmplt.token) != NULL && (self->_lf__outputControlReactionTrigger.tmplt.token)->value != NULL);
    _lf_replace_template_token((token_template_t*)outputControlReactionTrigger, (self->_lf__outputControlReactionTrigger.tmplt.token));
    client1.num_train_samples = self->_lf_client1.num_train_samples;
    #line 244 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    /*Correspondence: Range: [(243, 8), (252, 1)) -> Range: [(0, 0), (9, 1)) (verbatim=true; src=/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf)*/// **** This reaction is unordered.
    // If the output port has not been lf_set for the current logical time,
    // send an ABSENT message to the receiving federate
    LF_PRINT_LOG("Contemplating whether to send port "
              "absent for port %d to federate %d.",
              1, 2);
    if (client1.num_train_samples == NULL || !client1.num_train_samples->is_present) {
        // The output port is NULL or it is not present.
        send_port_absent_to_federate(NEVER, 1, 2);
    }
}
#include "include/api/set_undef.h"
#include "include/api/set.h"
void client1646705513_mainreaction_function_4(void* instance_args) {
    _client1646705513_main_main_self_t* self = (_client1646705513_main_main_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    struct client1 {
        clientreactor447326045_global_parameter_t* global_parameter;
    
    } client1;
    // Expose the action struct as a local variable whose name matches the action name.
    client1646705513_main_networkMessage_3_t* networkMessage_3 = &self->_lf_networkMessage_3;
    // Set the fields of the action struct to match the current trigger.
    networkMessage_3->is_present = (bool)self->_lf__networkMessage_3.status;
    networkMessage_3->has_value = ((self->_lf__networkMessage_3.tmplt.token) != NULL && (self->_lf__networkMessage_3.tmplt.token)->value != NULL);
    _lf_replace_template_token((token_template_t*)networkMessage_3, (self->_lf__networkMessage_3.tmplt.token));
    client1.global_parameter = &(self->_lf_client1.global_parameter);
    #line 258 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    /*Correspondence: Range: [(257, 8), (273, 27)) -> Range: [(0, 0), (16, 27)) (verbatim=true; src=/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf)*/// **** This reaction is unordered.
    // Acquire the GIL (Global Interpreter Lock) to be able to call Python APIs.
    PyGILState_STATE gstate;
    gstate = PyGILState_Ensure();
    // **** This reaction is unordered.
    client1.global_parameter->physical_time_of_arrival = self->_lf__networkMessage_3.physical_time_of_arrival;
    PyObject* message_byte_array = PyBytes_FromStringAndSize((char*)networkMessage_3->token->value, networkMessage_3->token->length);
    Py_XINCREF(message_byte_array);
    PyObject* deserialized_message = PyObject_CallMethod(global_pickler, "loads", "O", message_byte_array);
    if (deserialized_message == NULL) {
        if (PyErr_Occurred()) PyErr_Print();
        lf_print_error_and_exit("Could not deserialize deserialized_message.");
    }
    Py_XDECREF(message_byte_array);
    lf_set(client1.global_parameter, deserialized_message);
    /* Release the thread. No Python API allowed beyond this point. */
    PyGILState_Release(gstate);
}
#include "include/api/set_undef.h"
_client1646705513_main_main_self_t* new_client1646705513_main() {
    _client1646705513_main_main_self_t* self = (_client1646705513_main_main_self_t*)_lf_new_reactor(sizeof(_client1646705513_main_main_self_t));
    #line 169 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    self->_lf_outputControlReactionTrigger.trigger = &self->_lf__outputControlReactionTrigger;
    #line 170 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    self->_lf_networkMessage_3.trigger = &self->_lf__networkMessage_3;
    // Set the _width variable for all cases. This will be -2
    // if the reactor is not a bank of reactors.
    self->_lf_client1_width = -2;
    #line 144 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 144 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    self->_lf_client1.updated_parameters_trigger.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 144 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 144 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    self->_lf_client1.updated_parameters_reactions[0] = &self->_lf__reaction_0;
    #line 144 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    self->_lf_client1.updated_parameters_trigger.reactions = self->_lf_client1.updated_parameters_reactions;
    #line 144 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    self->_lf_client1.updated_parameters_trigger.last = NULL;
    #line 144 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    self->_lf_client1.updated_parameters_trigger.number_of_reactions = 1;
    #line 144 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    #ifdef FEDERATED
    #line 144 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    self->_lf_client1.updated_parameters_trigger.physical_time_of_arrival = NEVER;
    #line 144 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    #endif // FEDERATED
    #line 145 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 145 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    self->_lf_client1.num_train_samples_trigger.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 145 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 145 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    self->_lf_client1.num_train_samples_reactions[0] = &self->_lf__reaction_2;
    #line 145 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    self->_lf_client1.num_train_samples_trigger.reactions = self->_lf_client1.num_train_samples_reactions;
    #line 145 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    self->_lf_client1.num_train_samples_trigger.last = NULL;
    #line 145 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    self->_lf_client1.num_train_samples_trigger.number_of_reactions = 1;
    #line 145 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    #ifdef FEDERATED
    #line 145 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    self->_lf_client1.num_train_samples_trigger.physical_time_of_arrival = NEVER;
    #line 145 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    #endif // FEDERATED
    #line 173 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    self->_lf__reaction_0.number = 0;
    #line 173 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    self->_lf__reaction_0.function = client1646705513_mainreaction_function_0;
    #line 173 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    self->_lf__reaction_0.self = self;
    #line 173 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    #line 173 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    self->_lf__reaction_0.STP_handler = NULL;
    #line 173 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    self->_lf__reaction_0.name = "?";
    #line 173 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    self->_lf__reaction_0.mode = NULL;
    #line 200 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    self->_lf__reaction_1.number = 1;
    #line 200 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    self->_lf__reaction_1.function = client1646705513_mainreaction_function_1;
    #line 200 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    self->_lf__reaction_1.self = self;
    #line 200 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    self->_lf__reaction_1.deadline_violation_handler = NULL;
    #line 200 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    self->_lf__reaction_1.STP_handler = NULL;
    #line 200 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    self->_lf__reaction_1.name = "?";
    #line 200 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    self->_lf__reaction_1.mode = NULL;
    #line 214 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    self->_lf__reaction_2.number = 2;
    #line 214 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    self->_lf__reaction_2.function = client1646705513_mainreaction_function_2;
    #line 214 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    self->_lf__reaction_2.self = self;
    #line 214 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    self->_lf__reaction_2.deadline_violation_handler = NULL;
    #line 214 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    self->_lf__reaction_2.STP_handler = NULL;
    #line 214 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    self->_lf__reaction_2.name = "?";
    #line 214 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    self->_lf__reaction_2.mode = NULL;
    #line 241 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    self->_lf__reaction_3.number = 3;
    #line 241 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    self->_lf__reaction_3.function = client1646705513_mainreaction_function_3;
    #line 241 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    self->_lf__reaction_3.self = self;
    #line 241 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    self->_lf__reaction_3.deadline_violation_handler = NULL;
    #line 241 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    self->_lf__reaction_3.STP_handler = NULL;
    #line 241 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    self->_lf__reaction_3.name = "?";
    #line 241 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    self->_lf__reaction_3.mode = NULL;
    #line 255 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    self->_lf__reaction_4.number = 4;
    #line 255 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    self->_lf__reaction_4.function = client1646705513_mainreaction_function_4;
    #line 255 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    self->_lf__reaction_4.self = self;
    #line 255 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    self->_lf__reaction_4.deadline_violation_handler = NULL;
    #line 255 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    self->_lf__reaction_4.STP_handler = NULL;
    #line 255 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    self->_lf__reaction_4.name = "?";
    #line 255 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    self->_lf__reaction_4.mode = NULL;
    #line 169 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    self->_lf__outputControlReactionTrigger.last = NULL;
    #line 169 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 169 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    self->_lf__outputControlReactionTrigger.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 169 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 169 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    #line 169 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    self->_lf__outputControlReactionTrigger_reactions[0] = &self->_lf__reaction_1;
    #line 169 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    #line 169 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    self->_lf__outputControlReactionTrigger_reactions[1] = &self->_lf__reaction_3;
    #line 169 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    self->_lf__outputControlReactionTrigger.reactions = &self->_lf__outputControlReactionTrigger_reactions[0];
    #line 169 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    self->_lf__outputControlReactionTrigger.number_of_reactions = 2;
    #line 169 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    #ifdef FEDERATED
    #line 169 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    self->_lf__outputControlReactionTrigger.physical_time_of_arrival = NEVER;
    #line 169 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    #endif // FEDERATED
    self->_lf__outputControlReactionTrigger.is_physical = false;
    
    self->_lf__outputControlReactionTrigger.tmplt.type.element_size = 0;
    self->_lf_outputControlReactionTrigger.type.element_size = 0;
    #line 170 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    self->_lf__networkMessage_3.last = NULL;
    #line 170 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 170 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    self->_lf__networkMessage_3.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 170 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 170 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    #line 170 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    self->_lf__networkMessage_3_reactions[0] = &self->_lf__reaction_4;
    #line 170 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    self->_lf__networkMessage_3.reactions = &self->_lf__networkMessage_3_reactions[0];
    #line 170 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    self->_lf__networkMessage_3.number_of_reactions = 1;
    #line 170 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    #ifdef FEDERATED
    #line 170 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    self->_lf__networkMessage_3.physical_time_of_arrival = NEVER;
    #line 170 "/mnt/c/Users/jacky/Desktop/Federated_Learning/fed-gen/Main/src/client1.lf"
    #endif // FEDERATED
    self->_lf__networkMessage_3.is_physical = false;
    
    self->_lf__networkMessage_3.tmplt.type.element_size = 0;
    self->_lf_networkMessage_3.type.element_size = 0;
    return self;
}
