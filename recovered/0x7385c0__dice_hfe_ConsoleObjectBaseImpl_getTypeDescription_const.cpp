// FUNCTION: BF2 0x7385c0
namespace dice { namespace hfe {

void* fn_0x7385c0(void* self, void* other) {
    void** vt = *(void***)other;
    ((void(*)(void*))vt[0x108/8])(self);
    return self;
}

} }
// REVERSED_FUNCTION: dice_hfe_ConsoleObjectBaseImpl_getTypeDescription_const (0x7385c0)
