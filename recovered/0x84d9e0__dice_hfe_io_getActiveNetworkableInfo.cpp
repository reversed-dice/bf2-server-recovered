// FUNCTION: BF2 0x84d9e0
// getActiveNetworkableInfo 0x84d9e0 — deref global + virtual slot 0x50
namespace dice { namespace hfe { namespace io {

typedef void* (*VF0)(void*);

void* getActiveNetworkableInfo() {
    void* p = *(void**)0x10b4010;
    if (p == 0)
        return 0;
    VF0 fn = (VF0)(*reinterpret_cast<void**>((char*)*reinterpret_cast<void**>(p) + 0x50));
    return fn(p);
}

}}}

// re-trigger validate 2026-08-06 20:39:30

// re-trigger validate 2026-08-07 00:31:19
