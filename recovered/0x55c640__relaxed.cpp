// FUNCTION: BF2 0x55c640
// VoipServerConnection::ReleaseInstance 0x4cb860 — deref global + virtual + reset
namespace dice { namespace hfe {

typedef void (*VF0)(void*);

void ReleaseInstance() {
    void* g = *(void**)0x108d660;
    if (g) {
        VF0 fn = (VF0)(*reinterpret_cast<void**>((char*)*reinterpret_cast<void**>(g) + 8));
        fn(g);
        *(void**)0x108d660 = 0;
    }
}

}}
