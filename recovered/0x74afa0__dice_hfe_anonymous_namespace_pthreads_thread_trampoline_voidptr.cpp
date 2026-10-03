// FUNCTION: BF2 0x74afa0
namespace dice { namespace hfe {
typedef void* (*vfn0)(void*);
void* fn_0x765420(void* self) {
    void** vt = *(void***)self;
    ((vfn0)vt[0x10/8])(self);
    return 0;
}
} }
// REVERSED_FUNCTION: dice_hfe_SoundObjectTemplate_createObject_const (0x765420)
