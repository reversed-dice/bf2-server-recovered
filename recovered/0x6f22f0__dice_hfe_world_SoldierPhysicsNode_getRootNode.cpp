// FUNCTION: BF2 0x6f22f0
namespace dice { namespace hfe { namespace world {
extern void* func_0x0069a1e0(void*);
void* get_0x6f22f0(void* p) {
    void* q = func_0x0069a1e0(*(void**)((char*)p + 0x18));
    return *(void**)((char*)q + 0x88);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_SoldierPhysicsNode_getRootNode (0x6f22f0)
