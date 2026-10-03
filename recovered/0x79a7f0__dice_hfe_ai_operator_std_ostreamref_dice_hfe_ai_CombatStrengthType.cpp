// FUNCTION: BF2 0x79a7f0
namespace dice { namespace hfe { namespace ai {
extern void fn_407628(void* s, const char* lit);
void* cb_79a7f0(void* dst, int mode) {
    switch (mode) {
    case 0:
        fn_407628(dst, (const char*)0xba779e);
        break;
    case 1:
        fn_407628(dst, (const char*)0xba774b);
        break;
    case 2:
        fn_407628(dst, (const char*)0xba7792);
        break;
    case 3:
        fn_407628(dst, (const char*)0xba7784);
        break;
    case 4:
        fn_407628(dst, (const char*)0xba7775);
        break;
    case 5:
        fn_407628(dst, (const char*)0xba7766);
        break;
    case 6:
        fn_407628(dst, (const char*)0xba7757);
        break;
    default:
        break;
    }
    return dst;
}
} } }
// REVERSED_FUNCTION: dice_hfe_ai_operator_std_ostreamref_dice_hfe_ai_CombatStatus (0x79a7f0)
