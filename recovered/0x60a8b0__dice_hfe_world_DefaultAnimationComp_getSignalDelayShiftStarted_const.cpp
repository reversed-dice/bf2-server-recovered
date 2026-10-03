// FUNCTION: BF2 0x60a8b0
namespace dice { namespace hfe { namespace world {
unsigned char get_0x60a8b0(void* p) {
    unsigned char v = *(unsigned char*)((char*)p + 0x50);
    *(unsigned char*)((char*)p + 0x50) = 0;
    return v;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_DefaultAnimationComp_getSignalDelayShiftStarted_const (0x60a8b0)

// re-trigger validate
