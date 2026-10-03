// FUNCTION: BF2 0xad41c0
// getActiveTrigger 0xad41c0 — double call + arg forward + tail-call
namespace dice { namespace hfe { namespace animationTools {

extern void* trigger_ctx();
extern void* trigger_fn(void* b, int type);

void* getActiveTrigger(int type) {
    void* a = trigger_ctx();
    if (a == 0)
        return 0;
    void* b = trigger_ctx();
    return trigger_fn(b, type);
}

}}}
