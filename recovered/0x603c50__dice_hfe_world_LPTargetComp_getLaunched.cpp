// FUNCTION: BF2 0x603c50
namespace dice { namespace hfe { namespace world {
bool fn_0x603c50(void* self) {
    void* a = *(void**)((char*)self+0x88);
    void* b = a ? *(void**)((char*)a+8) : 0;
    return b != 0;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_LPTargetComp_getLaunched (0x603c50)
