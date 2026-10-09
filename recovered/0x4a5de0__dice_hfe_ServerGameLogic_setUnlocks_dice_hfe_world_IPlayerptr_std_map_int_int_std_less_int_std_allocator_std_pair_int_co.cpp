// FUNCTION: BF2 0x4a5de0
// BF2_FLAGS: -fno-tree-ter
#include <map>

namespace dice { namespace hfe {

typedef std::map<int, int> IntIntMap;

class IPlayer;

class UnlockEvent {
public:
    enum UnlockEventTypes { EU0, EU1, EU2 };
    char _pad[0x50];
    UnlockEvent(UnlockEventTypes t, int id, IntIntMap* m);
};

extern void* game;

namespace {
void setAllUnlockLevels(IntIntMap* m, int level);
}

class ServerGameLogic {
public:
    void setUnlocks(IPlayer* p, IntIntMap* m);
};

} }

void dice::hfe::ServerGameLogic::setUnlocks(dice::hfe::IPlayer* p, dice::hfe::IntIntMap* m) {
    if (*(char*)((char*)this + 0x556) != 0) {
        setAllUnlockLevels(m, 99);
    }
    ((void (*)(void*, dice::hfe::IntIntMap*))(*(void***)p)[0x4b8 / 8])(p, m);
    ((void (*)(void*, int, dice::hfe::UnlockEvent*))(*(void***)dice::hfe::game)[0x130 / 8])(
        dice::hfe::game,
        ((int (*)(void*))(*(void***)p)[0xa8 / 8])(p),
        new dice::hfe::UnlockEvent((dice::hfe::UnlockEvent::UnlockEventTypes)1,
                                  ((int (*)(void*))(*(void***)p)[0xa8 / 8])(p), m));
}
