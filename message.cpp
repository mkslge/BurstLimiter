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


