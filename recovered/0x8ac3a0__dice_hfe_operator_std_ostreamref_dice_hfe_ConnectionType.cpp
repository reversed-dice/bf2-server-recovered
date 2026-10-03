// FUNCTION: BF2 0x8ac3a0
namespace dice { namespace hfe {
extern void fn_407628(void* s, const char* lit);
void* cb_8ac3a0(void* dst, int mode) {
    switch (mode) {
    case 0:
        fn_407628(dst, (const char*)0xbd62dc);
        break;
    case 1:
        fn_407628(dst, (const char*)0xbd6323);
        break;
    case 2:
        fn_407628(dst, (const char*)0xbd6314);
        break;
    case 3:
        fn_407628(dst, (const char*)0xbd6305);
        break;
    case 4:
        fn_407628(dst, (const char*)0xbd62f7);
        break;
    case 5:
        fn_407628(dst, (const char*)0xbd62e9);
        break;
    default:
        fn_407628(dst, (const char*)0xbd632b);
        break;
    }
    return dst;
}
} }
// REVERSED_FUNCTION: dice_hfe_operator_std_ostreamref_dice_hfe_ConnectionType (0x8ac3a0)
