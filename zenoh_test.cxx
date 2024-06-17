#include <iostream>
#include "zenohc.hxx"
using namespace zenohc;

int main(int, char **) {
    Config config;
    auto session = expect<Session>(open(std::move(config)));
    session.put("demo/example/simple", "Simple!");
    std::cout << "Wrote 'Simple!' to 'demo/example/simple'" << std::endl;
}
