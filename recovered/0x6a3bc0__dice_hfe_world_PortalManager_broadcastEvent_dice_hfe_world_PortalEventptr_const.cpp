// FUNCTION: BF2 0x6a3bc0
#include <set>

class PortalEvent {
public:
    unsigned int getType();
};

class Listener {
public:
    virtual void notify(PortalEvent* ev);
};

class PortalManager {
public:
    char _pad0[0x70];
    std::set<Listener*>** m_slots;
    void broadcastEvent(PortalEvent* ev);
};

void PortalManager::broadcastEvent(PortalEvent* ev) {
    unsigned int t = ev->getType();
    std::set<Listener*>* s = m_slots[t];
    for (std::set<Listener*>::iterator it = s->begin(); it != s->end(); ++it)
        (*it)->notify(ev);
}
