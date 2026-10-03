// FUNCTION: BF2 0xaf38a0
// getHeightmapClusterEditable 0xaf38a0 — deref global + virtual [0x18] + arg
namespace dice { namespace hfe { namespace world {

typedef void* (*VF1)(void*, int);

void* getHeightmapClusterEditable() {
    void* p = *(void**)0x10a4328;
    if (p == 0)
        return 0;
    VF1 fn = (VF1)(*reinterpret_cast<void**>((char*)*reinterpret_cast<void**>(p) + 0x18));
    return fn(p, *(int*)0xc96574);
}

}}}
