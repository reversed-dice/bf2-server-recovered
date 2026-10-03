// FUNCTION: BF2 0x8bf260
namespace dice { namespace hfe { namespace world {
extern void fn_407628(void* s, const char* lit);
void* cb_8bf260(void* dst, int mode) {
    switch (mode) {
    case 0:
        fn_407628(dst, (const char*)0xc12460);
        break;
    case 1:
        fn_407628(dst, (const char*)0xc1242a);
        break;
    case 2:
        fn_407628(dst, (const char*)0xc1244f);
        break;
    case 3:
        fn_407628(dst, (const char*)0xc12449);
        break;
    case 4:
        fn_407628(dst, (const char*)0xc1243d);
        break;
    case 5:
        fn_407628(dst, (const char*)0xc12431);
        break;
    default:
        break;
    }
    return dst;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_operator_std_ostreamref_dice_hfe_world_Renderable (0x8bf260)
