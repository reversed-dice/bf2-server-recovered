// FUNCTION: BF2 0x453be0
namespace dice { namespace hfe {
extern void* g_gameServer2;
class GameServer {
public:
    void* vtable;
};
float getSimulationRate() {
    void* gs = g_gameServer2;
    void* vt = *(void**)gs;
    float (*fn)(void*) = (float(*)(void*))(*(void**)((char*)vt + 0x48));
    return fn(gs);
}
}
}

// REVERSED_FUNCTION: dice_hfe_GameServer_getSimulationRate (0x453be0)
