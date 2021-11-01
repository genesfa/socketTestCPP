#include <iostream>

#include "TestZMQ.h"
int main() {
    TestZMQ t = TestZMQ();
    t.sendMessage("TEST");
    return 0;
}
