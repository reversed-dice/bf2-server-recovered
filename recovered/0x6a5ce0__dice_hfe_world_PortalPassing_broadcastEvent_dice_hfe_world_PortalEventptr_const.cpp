// FUNCTION: BF2 0x6a5ce0
#include <set>

class PortalEvent {
public:
    unsigned int getType();
};

class Listener {
public:
    virtual void notify(PortalEvent* ev);
};

class PortalPassing {
public:
    char _pad0[0x20];
    std::set<Listener*>** m_slots;
    void broadcastEvent(PortalEvent* ev);
};

void PortalPassing::broadcastEvent(PortalEvent* ev) {
    unsigned int t = ev->getType();
    std::set<Listener*>* s = m_slots[t];
    for (std::set<Listener*>::iterator it = s->begin(); it != s->end(); ++it)
        (*it)->notify(ev);
}
