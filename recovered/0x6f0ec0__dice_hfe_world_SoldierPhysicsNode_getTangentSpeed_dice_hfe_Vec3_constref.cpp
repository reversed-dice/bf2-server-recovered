// FUNCTION: BF2 0x6f0ec0
namespace dice { namespace hfe { namespace world {

typedef void* (*vfn0)(void*);
void* fn_0x6f0ec0(void* self) {
    void** vt = *(void***)self;
    void* r = ((vfn0)vt[0x2a0/8])(self);
    void** vt2 = *(void***)r;
    return ((vfn0)vt2[0xc0/8])(r);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_SoldierPhysicsNode_getTangentSpeed_dice_hfe_Vec3_constref (0x6f0ec0)
