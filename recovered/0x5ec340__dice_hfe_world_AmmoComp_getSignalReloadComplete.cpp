// FUNCTION: BF2 0x5ec340
namespace dice { namespace hfe { namespace world {
unsigned char get_0x5ec340(void* p) {
    unsigned char v = *(unsigned char*)((char*)p + 0x6e);
    *(unsigned char*)((char*)p + 0x6e) = 0;
    return v;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_AmmoComp_getSignalReloadComplete (0x5ec340)

// re-trigger validate
