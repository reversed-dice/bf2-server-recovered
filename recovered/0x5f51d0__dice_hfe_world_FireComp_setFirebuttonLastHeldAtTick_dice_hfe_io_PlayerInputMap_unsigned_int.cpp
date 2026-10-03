// FUNCTION: BF2 0x5f51d0
namespace dice { namespace hfe { namespace world {
void fn_0x5f51d0(void* self, int mask, unsigned tick) {
    void* p = *(void**)((char*)self+0xc0);
    if (mask == *(int*)((char*)p+0x64)) {
        *(unsigned*)((char*)self+0x14c) = tick;
        return;
    }
    if (mask == *(int*)((char*)p+0x68)) {
        *(unsigned*)((char*)self+0x150) = tick;
        return;
    }
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_FireComp_setFirebuttonLastHeldAtTick_dice_hfe_io_PlayerInputMap_unsigned_int (0x5f51d0)
