// FUNCTION: BF2 0x8c1460
namespace dice { namespace hfe { namespace world {
extern void fn_407628(void* s, const char* lit);
void* cb_8c1460(void* dst, int mode) {
    switch (mode) {
    case 0:
        fn_407628(dst, (const char*)0xc12595);
        break;
    case 1:
        fn_407628(dst, (const char*)0xc12544);
        break;
    case 2:
        fn_407628(dst, (const char*)0xc12586);
        break;
    case 3:
        fn_407628(dst, (const char*)0xc1257d);
        break;
    case 4:
        fn_407628(dst, (const char*)0xc12574);
        break;
    case 5:
        fn_407628(dst, (const char*)0xc12566);
        break;
    case 6:
        fn_407628(dst, (const char*)0xc1255d);
        break;
    case 7:
        fn_407628(dst, (const char*)0xc12553);
        break;
    default:
        break;
    }
    return dst;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_operator_std_ostreamref_dice_hfe_world_CameraMode (0x8c1460)
