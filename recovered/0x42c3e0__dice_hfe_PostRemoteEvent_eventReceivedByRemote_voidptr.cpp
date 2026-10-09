// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x42c3e0
namespace dice { namespace hfe {

class Event;

class EventManager {
public:
    virtual void _v00();
    virtual void _v08();
    virtual void _v10();
    virtual void _v18();
    virtual void postEvent(unsigned int category, Event* event, float delay);
};

extern EventManager* eventManager;

class Event {
public:
    char _pad[0x28];
    int m_field28;
    void* m_field30;
    int m_field38;
};

class PostRemoteEvent {
public:
    static Event* m_event;

    char _pad[0x10];
    int m_category;
    int m_type;
    char m_data[0x20];

    void eventReceivedByRemote(void* data);
};

void PostRemoteEvent::eventReceivedByRemote(void* data)
{
    int val = *(int*)data;
    if (*(unsigned long long const*)&m_category != 0x1400000006ULL)
        return;
    m_event->m_field28 = m_type;
    m_event->m_field38 = val;
    m_event->m_field30 = m_data;
    eventManager->postEvent(m_category, m_event, 0.0f);
}

} }
