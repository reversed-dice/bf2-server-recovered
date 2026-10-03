// FUNCTION: BF2 0x637950
namespace dice { namespace hfe { namespace world {
typedef void (*VFn)(void*);
void wrap_0x637950(void* p) {
    void* o = *(void**)((char*)p + 0x18);
    VFn fn = (VFn)(*reinterpret_cast<void**>((char*)*reinterpret_cast<void**>(o) + 0x130));
    fn(o);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_StaticPhysicsNode_getBoundingRadius_const (0x637950)
