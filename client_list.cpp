//
// Created by Mark on 5/19/25.
//

#include "client_list.h"




Client_list::Client_list(int max_messages, double burst_timeframe) {
    this->max_messages = max_messages;
    this->burst_timeframe = burst_timeframe;
}


Client_list::~Client_list() {
    this->max_messages = 100;
    this->burst_timeframe = 1;
}


bool Client_list::contains_client(string ip_address) {
    return this->clients.find(ip_address) != this->clients.end();
}


void Client_list::add_client(Client* client, string ip) {
    clients.emplace(ip, client);
}




bool Client_list::client_limit_hit(string ip) {
    //if we havent seen this client before the rate limit has implicitly has not been hit
    if(!clients.contains(ip)) {
        return false;
    }

    //otherwise we need to check that the target client has not reached the max messages
    Client* target_client = this->clients.find(ip)->second;
    return target_client->get_message_count() >= this->max_messages;

}



Client Client_list::get_client(const string ip_address) {
    auto client_pair = clients.find(ip_address);

    Client* client = client_pair->second;

    //make sure we didn't somehow grab an ip that has a null client somehow
    if (client == nullptr) {
        throw runtime_error("Client found in get_client() is null");
    }

    //also need to make sure that the client exists in the map
    if (client_pair == clients.end()) {
        throw runtime_error("Client not found");
    }

    //if these are met, we can return the client we got
    return *client;
}

Client clien








