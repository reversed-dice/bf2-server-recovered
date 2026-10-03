// FUNCTION: BF2 0x6f8900
namespace dice { namespace hfe { namespace world {

void* fn_0x637e70(void* self) {
    void* a = *(void**)((char*)self+0x18);
    void* b = *(void**)((char*)a+0x50);
    if (b) return *(void**)((char*)b+0x88);
    return 0;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_PhysicsNode_getParent_const (0x637e70)
