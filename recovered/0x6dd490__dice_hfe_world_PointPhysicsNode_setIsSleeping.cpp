// FUNCTION: BF2 0x6dd490
namespace dice { namespace hfe { namespace world {
void fn_0x6dd490(void* self) {
    if (*(int*)(*(void**)0x10a3660) == 1) {
        int v = *(int*)((char*)self+0x70);
        *(int*)((char*)self+0x74) = v;
        return;
    }
    *(int*)((char*)self+0x74) = 0;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_PointPhysicsNode_setIsSleeping (0x6dd490)
