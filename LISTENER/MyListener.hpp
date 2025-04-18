#include "EventListener.hpp"
#include <iostream>

class MyListener : public EventListener {
public:
    void onEvent( int data ) override {
        std::cout << "Evento recibido. data: " << data << std::endl;
    }

};