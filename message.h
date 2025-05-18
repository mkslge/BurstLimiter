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

    string get_content();
    bool get_status();
    time_t* get_timestamp();


    void set_content(string content);
    void set_timestamp(time_t* timestamp);
    void set_status(bool status);







};



#endif //MESSAGE_H
