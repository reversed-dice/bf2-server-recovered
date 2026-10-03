// FUNCTION: BF2 0x7e93f0
namespace dice { namespace hfe { namespace io {
extern void fn_407628(void* s, const char* lit);
void* cb_7e93f0(void* dst, int mode) {
    switch (mode) {
    case 0:
        fn_407628(dst, (const char*)0xbade1f);
        break;
    case 1:
        fn_407628(dst, (const char*)0xbade27);
        break;
    case 2:
        fn_407628(dst, (const char*)0xbade2f);
        break;
    default:
        fn_407628(dst, (const char*)0xc120d2);
        break;
    }
    return dst;
}
} } }
// REVERSED_FUNCTION: dice_hfe_io_operator_std_ostreamref_dice_hfe_io_InputDevice (0x7e93f0)
