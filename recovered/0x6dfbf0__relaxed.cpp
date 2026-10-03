// FUNCTION: BF2 0x6dfbf0
namespace dice { namespace hfe { namespace world {
extern void* func_0x0069a1e0(void*);
void* get_0x637c20(void* p) {
    void* q = func_0x0069a1e0(*(void**)((char*)p + 0x28));
    return *(void**)((char*)q + 0x90);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_PhysicsNode_getRootNode (0x637c20)
