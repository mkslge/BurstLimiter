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
    unordered_map<string, client*> clients;
    int max_messages;
    double timeframe;


    public:
    Client_list();
    ~Client_list();




};



#endif //CLIENT_LIST_H
