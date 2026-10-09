// FUNCTION: BF2 0x43d0a0
#include <list>
#include <map>
#include <string>

namespace dice { namespace hfe {
namespace world { class IPlayer; }

class CreatePlayerEvent {
public:
    char _pad[0x40];
    CreatePlayerEvent(world::IPlayer* player, bool add);
};

class UnlockEvent {
public:
    char _pad[0x50];
    enum UnlockEventTypes { UNLOCK_TYPE = 1 };
    UnlockEvent(UnlockEventTypes type, int id, std::map<int, int>* unlocks);
};

typedef void (*SendEventFn)(void*, void*);

struct Connection {
    char _pad0[0x38];
    void* m_events;
    char _pad1[0xf0 - 0x40];
    int m_id;
};

void clientSendPlayerDatabase(Connection* self)
{
    void* mgr = *(void**)0x0112ee38;
    std::list<world::IPlayer*>* players =
        (std::list<world::IPlayer*>*)((void* (*)(void*))(*(void***)mgr)[0xf])(mgr);
    for (std::list<world::IPlayer*>::iterator it = players->begin(); it != players->end(); ++it) {
        world::IPlayer* p = *it;
        if (((int (*)(void*))(*(void***)p)[0xa8/8])(p) != self->m_id) {
            ((SendEventFn)(*(void***)self->m_events)[0x78/8])(self->m_events,
                new CreatePlayerEvent(p, true));
        }
    }
    void* obj = ((void* (*)(void*))(*(void***)self)[0x30/8])(self);
    if (obj) {
        ((SendEventFn)(*(void***)self->m_events)[0x78/8])(self->m_events,
            new UnlockEvent(UnlockEvent::UNLOCK_TYPE,
                ((int (*)(void*))(*(void***)obj)[0xa8/8])(obj),
                (std::map<int,int>*)((void* (*)(void*))(*(void***)obj)[0x4c0/8])(obj)));
    }
}
} }
