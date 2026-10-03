// FUNCTION: BF2 0xaf3820
// getActiveHeightmap 0xaf3820 — deref global + virtual slot 0x80
namespace dice { namespace hfe { namespace world {

typedef void* (*VF0)(void*);

void* getActiveHeightmap() {
    void* p = *(void**)0x10a4328;
    if (p == 0)
        return 0;
    VF0 fn = (VF0)(*reinterpret_cast<void**>((char*)*reinterpret_cast<void**>(p) + 0x80));
    return fn(p);
}

}}}

// re-trigger validate 2026-08-06 20:37:49

// re-trigger validate 2026-08-07 00:29:41
