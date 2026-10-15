// FUNCTION: BF2 0x43f340
#include <list>

namespace dice { namespace hfe {

class GameEvent {
public:
    virtual void addRef();
    virtual void getRef();
    virtual void release();
    char _pad8[4];
    int m_0xc;
};

template <class T>
class SmartPtr {
public:
    T* m_p;
    SmartPtr() : m_p(0) {}
    SmartPtr(const SmartPtr& o) : m_p(o.m_p) { if (m_p) m_p->addRef(); }
    ~SmartPtr() { if (m_p) m_p->release(); }
    T* operator->() const { return m_p; }
};

class GameEventManager {
public:
    bool insertEvents(std::list<SmartPtr<GameEvent> >* events);
private:
    void* m_0;
    unsigned char _pad1[0x100 - 0x8];
    std::list<SmartPtr<GameEvent> > m_l100;
    unsigned char _pad2[0x130 - 0x110];
    int m_0x130;
};

bool GameEventManager::insertEvents(std::list<SmartPtr<GameEvent> >* events) {
    while (events->size() != 0) {
        SmartPtr<GameEvent> e = events->front();
        events->pop_front();
        e->m_0xc = m_0x130++;
        m_l100.push_back(e);
    }
    return true;
}

} }
