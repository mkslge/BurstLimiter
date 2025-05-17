//
// Created by Mark on 5/17/25.
//

#ifndef MESSAGE_H
#define MESSAGE_H

#include <string>
#include <time.h>
using namespace std;

class Message {
private:
    string content;
    time_t* timestamp;
    bool status; //true if went through false if dropped
public:
    Message(string content, time_t* timestamp, bool status);
    ~Message();

};



#endif //MESSAGE_H
