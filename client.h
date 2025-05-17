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


class Client {
private:
    int messageCount;
    sockaddr_in *client;

public:Client();

    bool addMessage();
    int getMessageCount();

};



#endif //CLIENT_H
