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
    Client_list(int max_messages, double timeframe);
    ~Client_list();

    bool contains_client(string ip_address);
    bool client_limit_hit(string ip);

    void add_client(Client* client, string ip);
    void increase_message_count(string ip);


    bool check_if_client_needs_update(string ip);



    Client get_client(string ip_address);
};



#endif //CLIENT_LIST_H
