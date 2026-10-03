// FUNCTION: BF2 0x6379d0
namespace dice { namespace hfe { namespace world {
typedef void (*VFn)(void*);
void wrap_0x6379d0(void* p) {
    void* o = *(void**)((char*)p + 0x18);
    VFn fn = (VFn)(*reinterpret_cast<void**>((char*)*reinterpret_cast<void**>(o) + 0x1c0));
    fn(o);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_StaticPhysicsNode_getRelativePosition_const (0x6379d0)
