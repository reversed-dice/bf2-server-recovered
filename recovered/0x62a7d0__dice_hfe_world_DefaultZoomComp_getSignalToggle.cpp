// FUNCTION: BF2 0x62a7d0
namespace dice { namespace hfe { namespace world {
unsigned char get_0x62a7d0(void* p) {
    unsigned char v = *(unsigned char*)((char*)p + 0x3d);
    *(unsigned char*)((char*)p + 0x3d) = 0;
    return v;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_DefaultZoomComp_getSignalToggle (0x62a7d0)

// re-trigger validate
