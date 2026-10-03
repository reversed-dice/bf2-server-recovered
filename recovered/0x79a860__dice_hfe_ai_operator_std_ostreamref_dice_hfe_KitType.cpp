// FUNCTION: BF2 0x79a860
namespace dice { namespace hfe { namespace ai {
extern void fn_407628(void* s, const char* lit);
void* cb_79a860(void* dst, int v) {
    switch (v) {
    case 0: fn_407628(dst, (const char*)0xba77af); break;  // KTSpecops
    case 1: fn_407628(dst, (const char*)0xba77b9); break;  // KTSniper
    case 2: fn_407628(dst, (const char*)0xba77c2); break;  // KTAssault
    case 3: fn_407628(dst, (const char*)0xba77cc); break;  // KTSupport
    case 4: fn_407628(dst, (const char*)0xba77d6); break;  // KTEngineer
    case 5: fn_407628(dst, (const char*)0xba77e1); break;  // KTMedic
    case 6: fn_407628(dst, (const char*)0xba77e9); break;  // KTAT
    case 7: fn_407628(dst, (const char*)0xba77ee); break;  // KTExtended1
    case 8: fn_407628(dst, (const char*)0xba77fa); break;  // KTExtended2
    case 9: fn_407628(dst, (const char*)0xba7806); break;  // KTExtended3
    case 10: fn_407628(dst, (const char*)0xba7812); break;  // KTExtended4
    case 11: fn_407628(dst, (const char*)0xba781e); break;  // KTExtended5
    case 12: fn_407628(dst, (const char*)0xba782a); break;  // KTExtended6
    default: break;
    }
    return dst;
}
}}}
// REVERSED_FUNCTION: dice_hfe_ai_operator_std_ostreamref_dice_hfe_KitType (0x79a860)
