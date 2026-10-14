// FUNCTION: BF2 0x454370
#include <list>
extern "C" void* g_112ee38;

typedef void* (*vfn78)(void*);
extern "C" void simulatePlayerPhysics_453aa0(void* self, void* p, float dt);

extern "C" char simulatePlayersPhysics_454370(void* self, float dt) {
    std::list<void*>* players = (std::list<void*>*)((vfn78)(*(void***)g_112ee38)[0x78/8])(g_112ee38);
    std::list<void*>::iterator it = players->begin();
    for (; it != players->end(); ++it) {
        simulatePlayerPhysics_453aa0(self, *it, dt);
    }
    return 1;
}
