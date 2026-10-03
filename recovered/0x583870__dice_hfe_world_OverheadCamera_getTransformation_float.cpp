// FUNCTION: BF2 0x583870
namespace dice { namespace hfe { namespace world {
typedef void (*vfn0)(void*);
void fn_0x583870(void* self) {
    void** vt = *(void***)self;
    ((vfn0)vt[0x108/8])(self);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_OverheadCamera_getTransformation_float (0x583870)
