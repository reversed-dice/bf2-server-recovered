// FUNCTION: BF2 0x738550
namespace dice { namespace hfe {

void* fn_0x738550(void* self, void* other) {
    void** vt = *(void***)other;
    ((void(*)(void*))vt[0xe8/8])(self);
    return self;
}

} }
// REVERSED_FUNCTION: dice_hfe_ConsoleObjectBaseImpl_getDeltaAsString_const (0x738550)
