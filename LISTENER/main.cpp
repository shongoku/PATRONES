#include "EventSource.hpp"
#include "MyListener.hpp"
#include <iostream>


int main() {
    auto source = EventSource();
    auto listener = std::make_shared<MyListener>();

    source.addListener( listener );
    source.triggerEvent( 10 );

    return 0;
}
