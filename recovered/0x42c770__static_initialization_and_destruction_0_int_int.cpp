// FUNCTION: BF2 0x42c770

#include <iostream>

namespace dice { namespace hfe {

class EventBase
{
public:
    EventBase() { m_20 = 0; }
private:
    char m_pad[0x18];
    void* m_20;
    char m_tail[0x18];
};

class PostRemoteEvent : public EventBase
{
public:
    PostRemoteEvent() {}
    virtual void method();
    static PostRemoteEvent* m_event;
};

PostRemoteEvent* PostRemoteEvent::m_event = new PostRemoteEvent();

} }
