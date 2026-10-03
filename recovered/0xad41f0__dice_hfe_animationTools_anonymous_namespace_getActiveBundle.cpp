// FUNCTION: BF2 0xad41f0
// getActiveBundle 0xad41f0 — double call + tail-call
namespace dice { namespace hfe { namespace animationTools {

extern void* bundle_ctx();
extern void* bundle_fn(void* b);

void* getActiveBundle() {
    void* a = bundle_ctx();
    if (a == 0)
        return 0;
    void* b = bundle_ctx();
    return bundle_fn(b);
}

}}}

// re-trigger validate 2026-08-06 17:17:33
