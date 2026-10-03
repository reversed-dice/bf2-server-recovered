// FUNCTION: BF2 0x79a650
namespace dice { namespace hfe { namespace ai {
extern void fn_407628(void* s, const char* lit);
void* cb_79a650(void* dst, int v) {
    switch (v) {
    case 0: fn_407628(dst, (const char*)0xba7618); break;  // ITProduction
    case 1: fn_407628(dst, (const char*)0xba7625); break;  // ITAmmunition
    case 2: fn_407628(dst, (const char*)0xba7632); break;  // ITRepair
    case 3: fn_407628(dst, (const char*)0xba763b); break;  // ITUnit
    case 4: fn_407628(dst, (const char*)0xba7642); break;  // ITAir
    case 5: fn_407628(dst, (const char*)0xba771b); break;  // ITHelicopter
    case 6: fn_407628(dst, (const char*)0xba7648); break;  // ITGround
    case 7: fn_407628(dst, (const char*)0xba7651); break;  // ITNaval
    case 8: fn_407628(dst, (const char*)0xba7659); break;  // ITControlpoint
    case 9: fn_407628(dst, (const char*)0xba7668); break;  // ITRadar
    case 10: fn_407628(dst, (const char*)0xba7670); break;  // ITAirfield
    case 11: fn_407628(dst, (const char*)0xba767b); break;  // ITTransportation
    case 12: fn_407628(dst, (const char*)0xba768c); break;  // ITArtillery
    case 13: fn_407628(dst, (const char*)0xba7698); break;  // ITFixed
    case 14: fn_407628(dst, (const char*)0xba76a0); break;  // ITCover
    case 15: fn_407628(dst, (const char*)0xba76a8); break;  // ITMobile
    case 16: fn_407628(dst, (const char*)0xba76b1); break;  // ITUnmanned
    case 17: fn_407628(dst, (const char*)0xba76bc); break;  // ITLowPriority
    case 18: fn_407628(dst, (const char*)0xba76ca); break;  // ITStructure
    case 19: fn_407628(dst, (const char*)0xba76d6); break;  // ITBiological
    case 20: fn_407628(dst, (const char*)0xba76e3); break;  // ITVegetation
    case 21: fn_407628(dst, (const char*)0xba76f0); break;  // ITSoldier
    case 22: fn_407628(dst, (const char*)0xba76fa); break;  // ITObstructedView
    case 23: fn_407628(dst, (const char*)0xba770b); break;  // ITNoTemperature
    case 24: fn_407628(dst, (const char*)0xba7728); break;  // ITHasWreck
    case 25: fn_407628(dst, (const char*)0xba7733); break;  // ITObstacle
    case 26: fn_407628(dst, (const char*)0xba773e); break;  // ITHasCarHorn
    default: break;
    }
    return dst;
}
}}}
// REVERSED_FUNCTION: dice_hfe_ai_operator_std_ostreamref_dice_hfe_ai_InformationType (0x79a650)
