//
// Created by Mark on 5/19/25.
//

#ifndef CLIENT_LIST_H
#define CLIENT_LIST_H
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include "client.h"

class Client_list {
private:
    unordered_map<string, Client*> clients;
    int max_messages;
    double burst_timeframe;


    public:
    Client_list::Client_list(int max_messages, double timeframe);
    ~Client_list();

    bool contains_client(string ip_address);
    void Client_list::add_client(Client* client, string ip);
    bool Client_list::client_threshold(Client* client, string ip);

    Client get_client(int index);
    Client get_client(string ip_address);
};



#endif //CLIENT_LIST_H
