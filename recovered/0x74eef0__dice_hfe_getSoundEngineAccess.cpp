// FUNCTION: BF2 0x74eef0
// getSoundEngineAccess 0x74eef0 — deref global + virtual call slot 0x50
namespace dice { namespace hfe {

typedef void* (*VF0)(void*);

void* getSoundEngineAccess() {
    void* p = *(void**)0x10aa288;
    if (p == 0)
        return 0;
    VF0 fn = (VF0)(*reinterpret_cast<void**>((char*)*reinterpret_cast<void**>(p) + 0x50));
    return fn(p);
}

}}

// re-trigger validate 2026-08-06 20:37:42

// re-trigger validate 2026-08-07 00:29:34
