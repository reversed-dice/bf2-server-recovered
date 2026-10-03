// FUNCTION: BF2 0x6f0e80
namespace dice { namespace hfe { namespace world {
typedef void (*VFn)(void*);
void wrap_0x6f0e80(void* p) {
    void* o = *(void**)((char*)p + 0x18);
    VFn fn = (VFn)(*reinterpret_cast<void**>((char*)*reinterpret_cast<void**>(o) + 0x118));
    fn(o);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_SoldierPhysicsNode_setAbsoluteTransformation_dice_hfe_Mat4_constref (0x6f0e80)
