// FUNCTION: BF2 0x8bc3c0
namespace dice { namespace hfe { namespace world {
extern void fn_407628(void* s, const char* lit);
void* cb_8bc3c0(void* dst, int mode) {
    switch (mode) {
    case 0:
        fn_407628(dst, (const char*)0xc12072);
        break;
    case 1:
        fn_407628(dst, (const char*)0xc120b2);
        break;
    case 2:
        fn_407628(dst, (const char*)0xc1209f);
        break;
    case 3:
        fn_407628(dst, (const char*)0xc1208a);
        break;
    case 4:
        fn_407628(dst, (const char*)0xc12083);
        break;
    case 5:
        fn_407628(dst, (const char*)0xc12079);
        break;
    case 6:
        fn_407628(dst, (const char*)0xc120bf);
        break;
    default:
        break;
    }
    return dst;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_operator_std_ostreamref_dice_hfe_world_Aimable (0x8bc3c0)
