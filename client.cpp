//
// Created by Mark on 5/17/25.
//

#include "client.h"




Client::Client() {
    this->message_count = 0;
    this->client_info = nullptr;
}


Client::Client(sockaddr_in* socket) {
    this->message_count = 0;
    this->client_info = socket;
}

Client::~Client() {

}



void Client::add_message(Message &message) {
    messages.push_back(message);
    message_count++;
}


int Client::get_message_count() {
    return this->message_count;
}

sockaddr_in* Client::get_client_info() {
    return this->client_info;
}

vector<Message> Client::get_messages() {
    return this->messages;
}

Message Client::get_message(int index) {
    if(index >= this->message_count) {
        throw "Message index out of range in function Client::get_message()";
    }

    return this->messages[index];
}

