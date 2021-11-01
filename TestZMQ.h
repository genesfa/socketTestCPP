//
// Created by vagrant on 11/1/21.
//

#ifndef SOCKETTEST_TESTZMQ_H
#define SOCKETTEST_TESTZMQ_H

#include <zmq.hpp>
class TestZMQ {
public:
    TestZMQ();
    zmq::socket_t socket;
    zmq::context_t ctx;
    void sendMessage(std::string);
};


#endif //SOCKETTEST_TESTZMQ_H
