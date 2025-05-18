//
// Created by Mark on 5/17/25.
//

#include "client.h"



Client::Client() {
    this->message_count = 0;
    this->client_info = nullptr;

}

Client::~Client() {
    for (int i = 0; i < this->message_count;i++) {
        delete messages.at(i);
    }

}