//
// Created by Mark on 5/19/25.
//

#include "client_list.h"




Client_list::Client_list(int max_messages, double timeframe) {
    this->max_messages = max_messages;
    this->timeframe = timeframe;

}


Client_list::~Client_list() {

}

void Client_list::add_client(Client* client, string ip) {
    clients.emplace(ip, client);
}

bool Client_list::client_threshold(Client* client, string ip) {
    if (!clients.contains(ip)) {

    } else {

    }
}





