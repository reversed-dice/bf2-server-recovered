// FUNCTION: BF2 0x6dd4b0
namespace dice { namespace hfe { namespace world {
void fn_0x6dd4b0(void* self, int val) {
    if (*(int*)(*(void**)0x10a3660) == 1) {
        int v = *(int*)((char*)self+0x70);
        *(int*)((char*)self+0x74) = v;
        return;
    }
    int r = 0;
    if (*(int*)(*(void**)0x10a3670) != 1) r = val;
    *(int*)((char*)self+0x74) = r;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_PointPhysicsNode_setSleepiness_int (0x6dd4b0)
