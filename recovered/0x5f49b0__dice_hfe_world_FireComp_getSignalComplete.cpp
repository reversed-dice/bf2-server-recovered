// FUNCTION: BF2 0x5f49b0
namespace dice { namespace hfe { namespace world {
unsigned char get_0x5f49b0(void* p) {
    unsigned char v = *(unsigned char*)((char*)p + 0x96);
    *(unsigned char*)((char*)p + 0x96) = 0;
    return v;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_FireComp_getSignalComplete (0x5f49b0)

// re-trigger validate
