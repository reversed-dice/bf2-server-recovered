// FUNCTION: BF2 0x8bed80
namespace dice { namespace hfe { namespace world {
extern void fn_407628(void* s, const char* lit);
void* cb_8bed80(void* dst, int mode) {
    switch (mode) {
    case 0:
        fn_407628(dst, (const char*)0xc1240b);
        break;
    case 1:
        fn_407628(dst, (const char*)0xc12419);
        break;
    case 2:
        fn_407628(dst, (const char*)0xc12412);
        break;
    case 3:
        fn_407628(dst, (const char*)0xc12421);
        break;
    default:
        break;
    }
    return dst;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_operator_std_ostreamref_dice_hfe_world_TerrainObjectType (0x8bed80)
