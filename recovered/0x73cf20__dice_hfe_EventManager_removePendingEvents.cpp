// FUNCTION: BF2 0x73cf20
namespace dice { namespace hfe {

enum EventCategory { EC_0 };
struct EventNode;
class IEventListener;

class EventManager {
public:
    virtual void addRef();
    virtual void getRef();
    virtual void release();
    virtual void queryInterface(unsigned int) const;
    virtual void postEvent(EventCategory, EventNode*, float);
    virtual void postEvent(EventCategory, unsigned int, void*, float);
    virtual void postEventNextUpdate(EventCategory, EventNode*);
    virtual void postEventNextUpdate(EventCategory, unsigned int, void*);
    virtual void processEvents(float);
    virtual void removePendingEvents();

    void popEvent();

    char _pad[0x10];
    void* m_eventList;
};

void EventManager::removePendingEvents()
{
    while (m_eventList != 0) {
        popEvent();
    }
}

} }
// REVERSED_FUNCTION: dice_hfe_EventManager_removePendingEvents (0x73cf20)
