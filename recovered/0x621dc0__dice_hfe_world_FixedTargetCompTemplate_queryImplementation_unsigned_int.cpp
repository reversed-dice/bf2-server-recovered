// FUNCTION: BF2 0x621dc0
namespace dice { namespace hfe { namespace world {
typedef int (*vfn0)(void*);
void* fn_0x621dc0(void* self, unsigned iid) {
    void** vt = *(void***)self;
    int r = ((vfn0)vt[0x20/8])(self);
    return ((unsigned)r == iid) ? self : 0;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_FixedTargetCompTemplate_queryImplementation_unsigned_int (0x621dc0)
