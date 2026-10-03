// FUNCTION: BF2 0xafedf0
// getActiveKitTemplate 0xafedf0 — deref global + tail-call
namespace dice { namespace hfe { namespace ai {

extern void* kit_fn(void* p);

void* getActiveKitTemplate() {
    void* p = *(void**)0x10adf70;
    if (p)
        return kit_fn(p);
    return 0;
}

}}}

// re-trigger validate 2026-08-06 20:38:33

// re-trigger validate 2026-08-07 00:30:18
