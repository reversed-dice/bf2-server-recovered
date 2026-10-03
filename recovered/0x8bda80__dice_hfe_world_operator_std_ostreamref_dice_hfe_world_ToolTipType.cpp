// FUNCTION: BF2 0x8bda80
namespace dice { namespace hfe { namespace world {
extern void fn_407628(void* s, const char* lit);
void* cb_8bda80(void* dst, int v) {
    switch (v) {
    case 0: fn_407628(dst, (const char*)0xc122b7); break;  // TTHeavyTank
    case 1: fn_407628(dst, (const char*)0xc122c3); break;  // TTLightTank
    case 2: fn_407628(dst, (const char*)0xc122cf); break;  // TTArtillery
    case 3: fn_407628(dst, (const char*)0xc122db); break;  // TTApc
    case 4: fn_407628(dst, (const char*)0xc122e1); break;  // TTScoutCar
    case 5: fn_407628(dst, (const char*)0xc122ec); break;  // TTFighter
    case 6: fn_407628(dst, (const char*)0xc122f6); break;  // TTDiveBomber
    case 7: fn_407628(dst, (const char*)0xc12303); break;  // TTBomber
    case 8: fn_407628(dst, (const char*)0xc1230c); break;  // TTAAGun
    case 9: fn_407628(dst, (const char*)0xc12314); break;  // TTStationaryMG
    case 10: fn_407628(dst, (const char*)0xc12323); break;  // TTDestroyer
    case 11: fn_407628(dst, (const char*)0xc1232f); break;  // TTBattleship
    case 12: fn_407628(dst, (const char*)0xc1233c); break;  // TTCarrier
    case 13: fn_407628(dst, (const char*)0xc12346); break;  // TTSubmarine
    case 14: fn_407628(dst, (const char*)0xc12352); break;  // TTLcvp
    case 16: fn_407628(dst, (const char*)0xc12359); break;  // TTBF110
    case 17: fn_407628(dst, (const char*)0xc12361); break;  // TTMosquito
    case 18: fn_407628(dst, (const char*)0xc1236c); break;  // TTATGun
    case 19: fn_407628(dst, (const char*)0xc12374); break;  // TTArmoredCar
    case 20: fn_407628(dst, (const char*)0xc12381); break;  // TTSturmGeschutz
    case 21: fn_407628(dst, (const char*)0xc12391); break;  // TTM3GMC
    default: break;
    }
    return dst;
}
}}}
// REVERSED_FUNCTION: dice_hfe_world_operator_std_ostreamref_dice_hfe_world_ToolTipType (0x8bda80)
