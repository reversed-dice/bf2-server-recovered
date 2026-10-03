// FUNCTION: BF2 0x8745f0
namespace dice { namespace hfe {
extern void fn_407628(void* s, const char* lit);
void* cb_8745f0(void* dst, int v) {
    switch (v) {
    case 0: fn_407628(dst, (const char*)0xbcd00b); break;  // MKillingSpree
    case 1: fn_407628(dst, (const char*)0xbcd019); break;  // MTankBuster
    case 2: fn_407628(dst, (const char*)0xbcd025); break;  // MTankGunner
    case 3: fn_407628(dst, (const char*)0xbcd031); break;  // MFighterPilot
    case 4: fn_407628(dst, (const char*)0xbcd03f); break;  // MFighterStrafing
    case 5: fn_407628(dst, (const char*)0xbcd050); break;  // MFighterBomber
    case 6: fn_407628(dst, (const char*)0xbcd05f); break;  // MMedic
    case 7: fn_407628(dst, (const char*)0xbcd066); break;  // MEngineer
    case 8: fn_407628(dst, (const char*)0xbcd070); break;  // MEagleEye
    case 9: fn_407628(dst, (const char*)0xbcd07a); break;  // MMachineGunner
    case 10: fn_407628(dst, (const char*)0xbcd089); break;  // MGrenadier
    case 11: fn_407628(dst, (const char*)0xbcd094); break;  // MBuggyStuntman
    case 12: fn_407628(dst, (const char*)0xbcd0a3); break;  // MHelicopterPilot
    case 13: fn_407628(dst, (const char*)0xbcd0b4); break;  // MHelicopterGunner
    case 14: fn_407628(dst, (const char*)0xbcd0c6); break;  // MPurpleHeart
    case 15: fn_407628(dst, (const char*)0xbcd0d3); break;  // MBazooka
    case 16: fn_407628(dst, (const char*)0xbcd0dc); break;  // MButcher
    case 17: fn_407628(dst, (const char*)0xbcd0e5); break;  // MCommanderWinning
    case 18: fn_407628(dst, (const char*)0xbcd0f7); break;  // MCommanderSurviving
    case 19: fn_407628(dst, (const char*)0xbcd10b); break;  // MCommanderKills
    case 20: fn_407628(dst, (const char*)0xbcd11b); break;  // MCommanderAssasin
    case 21: fn_407628(dst, (const char*)0xbcd12d); break;  // MMiddleEastWins
    case 22: fn_407628(dst, (const char*)0xbcd13d); break;  // MAsiaWins
    case 23: fn_407628(dst, (const char*)0xbcd147); break;  // MEuropeWins
    case 24: fn_407628(dst, (const char*)0xbcd153); break;  // MAirService
    default: break;
    }
    return dst;
}
}}
// REVERSED_FUNCTION: dice_hfe_operator_std_ostreamref_dice_hfe_world_Medal (0x8745f0)
