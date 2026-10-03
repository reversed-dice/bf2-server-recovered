// FUNCTION: BF2 0x7385c0
namespace dice { namespace hfe {

void* fn_0x738530(void* self, void* other) {
    void** vt = *(void***)other;
    ((void(*)(void*))vt[0x108/8])(self);
    return self;
}

} }
// REVERSED_FUNCTION: dice_hfe_ConsoleObjectBaseImpl_getRangeAsString_const (0x738530)
