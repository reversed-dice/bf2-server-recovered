// FUNCTION: BF2 0x6a6100
#include <set>

class PortalEvent {
public:
    unsigned int getType();
};

class Listener {
public:
    virtual void notify(PortalEvent* ev);
};

class Sector {
public:
    char _pad0[0x40];
    std::set<Listener*>** m_slots;
    void broadcastEvent(PortalEvent* ev);
};

void Sector::broadcastEvent(PortalEvent* ev) {
    unsigned int t = ev->getType();
    std::set<Listener*>* s = m_slots[t];
    for (std::set<Listener*>::iterator it = s->begin(); it != s->end(); ++it)
        (*it)->notify(ev);
}
