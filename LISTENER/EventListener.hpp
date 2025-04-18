
#ifndef EVENTLISTENER_HPP
#define EVENTLISTENER_HPP

/*
 *
 */

class EventListener {
public:
    virtual void onEvent( int data ) = 0;
    virtual ~EventListener() {}
};
#endif // EVENTLISTENER_HPP

