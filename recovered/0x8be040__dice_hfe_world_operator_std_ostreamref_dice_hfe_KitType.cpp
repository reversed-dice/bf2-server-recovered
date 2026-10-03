// FUNCTION: BF2 0x8be040
namespace dice { namespace hfe { namespace world {
extern void fn_407628(void* s, const char* lit);
void* cb_8be040(void* dst, int mode) {
    switch (mode) {
    case 0:
        fn_407628(dst, (const char*)0xba77e9);
        break;
    case 1:
        fn_407628(dst, (const char*)0xba77af);
        break;
    case 2:
        fn_407628(dst, (const char*)0xba77e1);
        break;
    case 3:
        fn_407628(dst, (const char*)0xba77d6);
        break;
    case 4:
        fn_407628(dst, (const char*)0xba77cc);
        break;
    case 5:
        fn_407628(dst, (const char*)0xba77c2);
        break;
    case 6:
        fn_407628(dst, (const char*)0xba77b9);
        break;
    default:
        break;
    }
    return dst;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_operator_std_ostreamref_dice_hfe_KitType (0x8be040)
