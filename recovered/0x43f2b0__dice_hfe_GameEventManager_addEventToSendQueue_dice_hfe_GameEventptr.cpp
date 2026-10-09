// FUNCTION: BF2 0x43f2b0
#include <list>

namespace dice { namespace hfe {

class GameEvent {
public:
    virtual void addRef();
    virtual void getRef();
    virtual void release();
    char _pad[0xc - 8];
    int m_sequence; // +0xc
};

template <typename T>
class SmartPtr {
public:
    T* m_ptr;
    SmartPtr() : m_ptr(0) {}
    SmartPtr(T* p) : m_ptr(p) { if (m_ptr) m_ptr->addRef(); }
    SmartPtr(SmartPtr const& o) : m_ptr(o.m_ptr) { if (m_ptr) m_ptr->addRef(); }
    ~SmartPtr() { if (m_ptr) m_ptr->release(); }
    T* operator->() const { return m_ptr; }
};

class GameEventManager {
public:
    char _pad0[0x20];
    std::list<SmartPtr<GameEvent> > m_sendQueue; // +0x20
    char _pad1[0x124 - 0x30];
    int m_sendSequence; // +0x124

    bool addEventToSendQueue(GameEvent* ev);
};

bool GameEventManager::addEventToSendQueue(GameEvent* ev)
{
    if (!ev)
        return false;
    SmartPtr<GameEvent> ptr(ev);
    ptr->m_sequence = m_sendSequence;
    ++m_sendSequence;
    m_sendQueue.push_back(ptr);
    ev->release();
    return true;
}

} }
