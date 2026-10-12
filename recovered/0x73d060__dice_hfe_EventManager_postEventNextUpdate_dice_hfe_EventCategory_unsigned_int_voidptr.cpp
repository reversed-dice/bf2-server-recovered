// FUNCTION: BF2 0x73d060
namespace dice { namespace hfe {

enum EventCategory { };

class QueuedEvent {
public:
    void* m_vptr;
    char _pad[0x18];
    void* m_20;
    unsigned int m_28;
    char _pad2[4];
    void* m_30;
};

typedef void (*PostNext)(void*, int, void*);

class EventManager {
public:
    void postEventNextUpdate(EventCategory, unsigned int, void*);
};

void EventManager::postEventNextUpdate(EventCategory cat, unsigned int a, void* b)
{
    PostNext post = (PostNext)(*(void***)this)[0x30 / 8];
    QueuedEvent* e = new QueuedEvent;
    e->m_20 = 0;
    e->m_vptr = (void*)0xb2d8b0;
    e->m_28 = a;
    e->m_30 = b;
    post(this, cat, e);
}

} }
