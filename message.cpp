//
// Created by Mark on 5/17/25.
//

#include "message.h"


Message::Message(string content, time_t* timestamp, bool status) {
    this->content = content;
    this->timestamp = timestamp;
    this->status = status;
}

Message::~Message() {
    delete this->timestamp;
    delete this->content;
}


string Message::get_content() {
    return this->content;
}

time_t* Message::get_timestamp() {
    return this->timestamp;
}

bool Message::get_status() {
    return this->status;
}

void Message::set_content(string content) {
    this->content = content;
}

void Message::set_timestamp(time_t* timestamp) {
    if(this->timestamp) {
        delete this->timestamp;
    }
    this->timestamp = timestamp;
}

void Message::set_status(bool status) {
    this->status = status;
}






