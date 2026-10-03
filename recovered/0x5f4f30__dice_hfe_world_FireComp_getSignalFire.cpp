// FUNCTION: BF2 0x5f4f30
namespace dice { namespace hfe { namespace world {
unsigned char get_0x5f4f30(void* p) {
    unsigned char v = *(unsigned char*)((char*)p + 0x95);
    *(unsigned char*)((char*)p + 0x95) = 0;
    return v;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_FireComp_getSignalFire (0x5f4f30)

// re-trigger validate
