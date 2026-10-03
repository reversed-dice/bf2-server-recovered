// FUNCTION: BF2 0x8bc600
namespace dice { namespace hfe { namespace world {
extern void fn_407628(void* s, const char* lit);
void* cb_8bc600(void* dst, int mode) {
    switch (mode) {
    case 0:
        fn_407628(dst, (const char*)0xc12127);
        break;
    case 1:
        fn_407628(dst, (const char*)0xc120d0);
        break;
    case 2:
        fn_407628(dst, (const char*)0xc12117);
        break;
    case 3:
        fn_407628(dst, (const char*)0xc12109);
        break;
    case 4:
        fn_407628(dst, (const char*)0xc120f6);
        break;
    case 5:
        fn_407628(dst, (const char*)0xc120e5);
        break;
    case 6:
        fn_407628(dst, (const char*)0xc120d7);
        break;
    default:
        break;
    }
    return dst;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_operator_std_ostreamref_dice_hfe_world_Armable (0x8bc600)
