// FUNCTION: BF2 0x6f8900
namespace dice { namespace hfe { namespace world {
void* fn_0x6f8900(void* self) {
    void* p = *(void**)((char*)self+0x18);
    void* q = *(void**)((char*)p+0x50);
    if (!q) return 0;
    return *(void**)((char*)q+0x88);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_StaticPhysicsNode_getParent_const (0x6f8900)
