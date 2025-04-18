#include "EventSource.hpp"
#include "MyListener.hpp"
#include <iostream>


// class EventListener {
//     public:
//         virtual void onEvent( int data ) = 0;
//         virtual ~EventListener() {}
// };


// class EventSource {
//     std::vector<std::shared_ptr<EventListener>> listeners;
// public:
//     void addListener( std::shared_ptr<EventListener> listener) {
//         listeners.push_back(listener);
//     }
// };


//     void triggerEvent( int data ) {
//         for( auto& listener : listeners ) {
//             listener->onEvent( data );
//         }
//     }
// };


// class MyListener : public EventListener {
//     public:
//         void onEvent( int data ) override {
//             std::cout << "Evento recibido. data: " << data << std::endl;
//         }   
// };


int main() {
    auto source = EventSource();
    auto listener = std::make_shared<MyListener>();

    source.addListener( listener );
    source.triggerEvent( 10 );

    return 0;
}
