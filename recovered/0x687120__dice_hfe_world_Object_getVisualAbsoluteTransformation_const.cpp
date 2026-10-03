// FUNCTION: BF2 0x687120
namespace dice { namespace hfe { namespace world {

typedef void* (*vfn0)(void*);
void* fn_0x687120(void* self) {
    void** vt = *(void***)self;
    return ((vfn0)vt[0x108/8])(self);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_Object_getVisualAbsoluteTransformation_const (0x687120)
