// FUNCTION: BF2 0xafedb0
// getActiveAITemplate 0xafedb0 — deref global + tail-call
namespace dice { namespace hfe { namespace ai {

extern void* ai_fn(void* p);

void* getActiveAITemplate() {
    void* p = *(void**)0x10adf50;
    if (p)
        return ai_fn(p);
    return 0;
}

}}}

// re-trigger validate 2026-08-06 20:37:56

// re-trigger validate 2026-08-07 00:29:48
