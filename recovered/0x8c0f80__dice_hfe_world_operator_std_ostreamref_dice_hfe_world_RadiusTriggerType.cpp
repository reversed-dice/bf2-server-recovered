// FUNCTION: BF2 0x8c0f80
namespace dice { namespace hfe { namespace world {
extern void fn_407628(void* s, const char* lit);
void* cb_8c0f80(void* dst, int mode) {
    switch (mode) {
    case 0:
        fn_407628(dst, (const char*)0xc1251d);
        break;
    case 1:
        fn_407628(dst, (const char*)0xc12525);
        break;
    case 2:
        fn_407628(dst, (const char*)0xc12532);
        break;
    case 3:
        fn_407628(dst, (const char*)0xc1253d);
        break;
    default:
        break;
    }
    return dst;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_operator_std_ostreamref_dice_hfe_world_Radius (0x8c0f80)
