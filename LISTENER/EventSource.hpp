#include "EventListener.hpp"
#include <memory>
#include <vector>


class EventSource {
    std::vector<std::shared_ptr<EventListener>> listeners;
public:
    void addListener( std::shared_ptr<EventListener> listener) {
        listeners.push_back(listener);
    }

    void triggerEvent( int data ) {
        for( auto& listener : listeners ) {
            listener->onEvent( data );
        }
    }
};

