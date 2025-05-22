//
// Created by Mark on 5/19/25.
//

#include "client_list.h"




Client_list::Client_list(int max_messages, double timeframe) {
    this->max_messages = max_messages;
    this->burst_timeframe = burst_timeframe;

}


Client_list::~Client_list() {

}


bool Client_list::contains_client(string ip_address) {
    return this->clients.find(ip_address) != this->clients.end();
}


void Client_list::add_client(Client* client, string ip) {
    clients.emplace(ip, client);
}




bool Client_list::client_threshold(Client* client, string ip) {
    //check if the ip is a new ip
    if (!clients.contains(ip)) {

    } else {

    }
}





