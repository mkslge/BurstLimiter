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
    vector<Message> messages;
    time_t* burst_time_start;
public:
    Client();
    Client(sockaddr_in *client_info);
    ~Client();

    void add_message(Message &message);

    int get_message_count();

    sockaddr_in* get_client_info();
    vector<Message> get_messages();
    Message get_message(int index);


    time_t* get_burst_time_start();
    void set_burst_time_start();
};



#endif //CLIENT_H
