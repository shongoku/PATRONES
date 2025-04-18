#include <iostream>
#include "singleton.hpp"


int main() {
    Singleton& s1 = Singleton::getInstance();
    Singleton& s2 = Singleton::getInstance();

    s1.sayHello();

    if (&s1 == &s2) {
        std::cout << "s1 and s2 are the same instance\n";
    }
}

