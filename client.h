//
// Created by Mark on 5/17/25.
//

#ifndef CLIENT_H
#define CLIENT_H

#include<sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <iostream>
#include "message.h"


class Client {
private:
    int message_count;
    sockaddr_in *client_info;
    vector<Message&> messages;

public:
    Client();
    Client(sockaddr_in *client_info);
    ~Client();

    bool add_message();
    int get_message_count();

};



#endif //CLIENT_H
