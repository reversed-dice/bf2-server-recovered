// FUNCTION: BF2 0x874c80
namespace dice { namespace hfe {
extern void fn_407628(void* s, const char* lit);
void* cb_874c80(void* dst, int v) {
    switch (v) {
    case 0: fn_407628(dst, (const char*)0xba77af); break;  // KTSpecops
    case 1: fn_407628(dst, (const char*)0xba77b9); break;  // KTSniper
    case 2: fn_407628(dst, (const char*)0xba77c2); break;  // KTAssault
    case 3: fn_407628(dst, (const char*)0xba77cc); break;  // KTSupport
    case 4: fn_407628(dst, (const char*)0xba77d6); break;  // KTEngineer
    case 5: fn_407628(dst, (const char*)0xba77e1); break;  // KTMedic
    case 6: fn_407628(dst, (const char*)0xba77e9); break;  // KTAT
    case 13: fn_407628(dst, (const char*)0xbcd15f); break;  // KTNoKit
    default: break;
    }
    return dst;
}
}}
// REVERSED_FUNCTION: dice_hfe_operator_std_ostreamref_dice_hfe_KitType (0x874c80)
