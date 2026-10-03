// FUNCTION: BF2 0x5622b0
namespace dice { namespace hfe { namespace world {
typedef void (*vfn0)(void*);
void fn_0x5622b0(void* self) {
    void** vt = *(void***)self;
    ((vfn0)vt[0x108/8])(self);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_TriggerableTarget_getTransform (0x5622b0)
