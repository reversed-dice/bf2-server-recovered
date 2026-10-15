// FUNCTION: BF2 0x47b040
// BF2_FLAGS: -fcrossjumping
extern "C" void abort() __attribute__((noreturn));

namespace dice { namespace hfe {

extern void* eventManager;
extern void* squadManager;

namespace world {

extern void* objectManager;
extern void* playerManager;

class WorldPref {
public:
    static void resetWorldTime(double);
    static void resetTickCount(unsigned int);
};

class TriggerableManager {
public:
    static TriggerableManager* m_instance;
    void refresh();
};

}

class ServerVoteManager {
public:
    static ServerVoteManager* getInstance();
    void reset();
};

class GameLogic {
public:
    void dropAllKits();
    void reset();
};

void GameLogic::reset() {
    void* em = eventManager;
    ((void (*)(void*, int, int, int, float))(*(void***)em)[0x28 / 8])(em, 0, 6, 0, 0.0f);
    dropAllKits();
    ((void (*)(void*))(*(void***)this)[0x5b0 / 8])(this);
    void* om = world::objectManager;
    ((void (*)(void*))(*(void***)om)[0x130 / 8])(om);
    ((void (*)(void*))(*(void***)this)[0x5f8 / 8])(this);
    ((void (*)(void*))(*(void***)this)[0x600 / 8])(this);
    if (*(void**)((char*)this + 0x228) != 0) abort();
    if (*(void**)((char*)this + 0x258) != 0) abort();
    world::WorldPref::resetWorldTime(0.0);
    world::WorldPref::resetTickCount(0);
    void* sm = squadManager;
    if (sm != 0) ((void (*)(void*))(*(void***)sm)[0x20 / 8])(sm);
    ((void (*)(void*, float, float, float, float))(*(void***)this)[0x260 / 8])(this, 0.0f, 0.0f, 512.0f, 512.0f);
    void* pm = world::playerManager;
    if (pm != 0) {
        void (*fn)(void*, void*) = (void (*)(void*, void*))(*(void***)this)[0x428 / 8];
        void* r = ((void* (*)(void*))(*(void***)pm)[0x60 / 8])(pm);
        fn(this, r);
    }
    if (((char (*)(void*))(*(void***)this)[0x278 / 8])(this) != 0) {
        ServerVoteManager* v = ServerVoteManager::getInstance();
        v->reset();
        world::TriggerableManager* tm = world::TriggerableManager::m_instance;
        if (tm != 0) tm->refresh();
    }
}

} }
