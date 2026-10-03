// FUNCTION: BF2 0x872ea0
// getVoiceMessages 0x872ea0 — deref global + tail-call
namespace dice { namespace hfe {

extern void* voice_fn(void* p);

void* getVoiceMessages() {
    void* p = *(void**)0x10b8c08;
    if (p)
        return voice_fn(p);
    return 0;
}

}}

// re-trigger validate 2026-08-06 20:37:35

// re-trigger validate 2026-08-07 00:29:27
