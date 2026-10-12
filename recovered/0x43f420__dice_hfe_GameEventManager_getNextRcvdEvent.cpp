// FUNCTION: BF2 0x43f420
#include <list>

namespace dice { namespace hfe {

class GameEvent {
public:
    virtual void addRef();
    virtual void getRef();
    virtual void release();
    virtual void queryInterface(unsigned int) const;
    virtual ~GameEvent();
};

class WeakPtr {
public:
    GameEvent* m_h;
    WeakPtr() : m_h(0) {}
    WeakPtr(WeakPtr const& o) : m_h(o.m_h) { if (m_h) m_h->addRef(); }
    ~WeakPtr() { if (m_h) m_h->release(); }
    WeakPtr& operator=(WeakPtr const& o) {
        m_h = o.m_h;
        if (m_h) m_h->addRef();
        return *this;
    }
};

class GameEventManager {
public:
    virtual WeakPtr getNextRcvdEvent();
private:
    char _pad[0xf8];
    std::list<WeakPtr> m_rcvdEvents;
};

WeakPtr GameEventManager::getNextRcvdEvent()
{
    if (m_rcvdEvents.size() != 0) {
        WeakPtr event = m_rcvdEvents.front();
        m_rcvdEvents.pop_front();
        return event;
    }
    return WeakPtr();
}

} }
