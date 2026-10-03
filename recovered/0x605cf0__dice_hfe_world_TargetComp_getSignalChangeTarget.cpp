// FUNCTION: BF2 0x605cf0
namespace dice { namespace hfe { namespace world {
unsigned char get_0x605cf0(void* p) {
    unsigned char v = *(unsigned char*)((char*)p + 0x61);
    *(unsigned char*)((char*)p + 0x61) = 0;
    return v;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_TargetComp_getSignalChangeTarget (0x605cf0)

// re-trigger validate
