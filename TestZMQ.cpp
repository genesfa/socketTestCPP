//
// Created by vagrant on 11/1/21.
//
#include <iostream>
#include "TestZMQ.h"
using namespace std;

    TestZMQ::TestZMQ() {
        zmq::context_t context{1};

        zmq::socket_t socket{context, zmq::socket_type::req};
        socket.connect("tcp://localhost:5555");

    };

void TestZMQ::sendMessage(std::string s) {
    socket.send(zmq::buffer(s), zmq::send_flags::none);
}




