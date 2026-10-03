// FUNCTION: BF2 0x6f0ea0
namespace dice { namespace hfe { namespace world {
typedef void (*VFn)(void*);
void wrap_0x6f0ea0(void* p) {
    void* o = *(void**)((char*)p + 0x18);
    VFn fn = (VFn)(*reinterpret_cast<void**>((char*)*reinterpret_cast<void**>(o) + 0xe0));
    fn(o);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_SoldierPhysicsNode_setAbsolutePosition_dice_hfe_Vec3_constref (0x6f0ea0)
