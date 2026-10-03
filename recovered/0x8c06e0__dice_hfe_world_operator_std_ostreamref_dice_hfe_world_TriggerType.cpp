// FUNCTION: BF2 0x8c06e0
namespace dice { namespace hfe { namespace world {
extern void fn_407628(void* s, const char* lit);
void* cb_8c06e0(void* dst, int mode) {
    switch (mode) {
    case 0:
        fn_407628(dst, (const char*)0xc124ef);
        break;
    case 1:
        fn_407628(dst, (const char*)0xc124f7);
        break;
    case 2:
        fn_407628(dst, (const char*)0xc12507);
        break;
    case 4:
        fn_407628(dst, (const char*)0xc124ff);
        break;
    default:
        break;
    }
    return dst;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_operator_std_ostreamref_dice_hfe_world_TerrainType (0x8c06e0)
