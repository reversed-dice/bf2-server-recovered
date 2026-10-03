// FUNCTION: BF2 0x8bf840
namespace dice { namespace hfe { namespace world {
extern void fn_407628(void* s, const char* lit);
void* cb_8bf840(void* dst, int mode) {
    switch (mode) {
    case 0:
        fn_407628(dst, (const char*)0xc124aa);
        break;
    case 1:
        fn_407628(dst, (const char*)0xc1246f);
        break;
    case 2:
        fn_407628(dst, (const char*)0xc12483);
        break;
    case 3:
        fn_407628(dst, (const char*)0xc12476);
        break;
    case 4:
        fn_407628(dst, (const char*)0xc1248e);
        break;
    case 5:
        fn_407628(dst, (const char*)0xc1249c);
        break;
    default:
        break;
    }
    return dst;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_operator_std_ostreamref_dice_hfe_world_Terrain (0x8bf840)
