// FUNCTION: BF2 0x8bdbc0
// operator>>(std::istream&, enum&) -- reads one token and maps it onto the
// ToolTipType enum.

#include <istream>
#include <string>

extern "C" std::istream* dice_hfe_world_operator_std_istreamref_dice_hfe_world_ToolTipTyperef(std::istream* is, int* out)
{
    std::string s;
    *is >> s;
    if (s.compare("TTHeavyTank") == 0 || s.compare("HeavyTank") == 0) { *out = 0; }
    else if (s.compare("TTLightTank") == 0 || s.compare("LightTank") == 0) { *out = 1; }
    else if (s.compare("TTArtillery") == 0 || s.compare("Artillery") == 0) { *out = 2; }
    else if (s.compare("TTApc") == 0 || s.compare("Apc") == 0) { *out = 3; }
    else if (s.compare("TTScoutCar") == 0 || s.compare("ScoutCar") == 0) { *out = 4; }
    else if (s.compare("TTFighter") == 0 || s.compare("Fighter") == 0) { *out = 5; }
    else if (s.compare("TTDiveBomber") == 0 || s.compare("DiveBomber") == 0) { *out = 6; }
    else if (s.compare("TTBomber") == 0 || s.compare("Bomber") == 0) { *out = 7; }
    else if (s.compare("TTAAGun") == 0 || s.compare("AAGun") == 0) { *out = 8; }
    else if (s.compare("TTStationaryMG") == 0 || s.compare("StationaryMG") == 0) { *out = 9; }
    else if (s.compare("TTDestroyer") == 0 || s.compare("Destroyer") == 0) { *out = 10; }
    else if (s.compare("TTBattleship") == 0 || s.compare("Battleship") == 0) { *out = 11; }
    else if (s.compare("TTCarrier") == 0 || s.compare("Carrier") == 0) { *out = 12; }
    else if (s.compare("TTSubmarine") == 0 || s.compare("Submarine") == 0) { *out = 13; }
    else if (s.compare("TTLcvp") == 0 || s.compare("Lcvp") == 0) { *out = 14; }
    else if (s.compare("TTDefGun") == 0 || s.compare("DefGun") == 0) { *out = 15; }
    else if (s.compare("TTBF110") == 0 || s.compare("BF110") == 0) { *out = 16; }
    else if (s.compare("TTMosquito") == 0 || s.compare("Mosquito") == 0) { *out = 17; }
    else if (s.compare("TTATGun") == 0 || s.compare("ATGun") == 0) { *out = 18; }
    else if (s.compare("TTArmoredCar") == 0 || s.compare("ArmoredCar") == 0) { *out = 19; }
    else if (s.compare("TTSturmGeschutz") == 0 || s.compare("SturmGeschutz") == 0) { *out = 20; }
    else if (s.compare("TTM3GMC") == 0 || s.compare("M3GMC") == 0) { *out = 21; }
    else { *out = 22; }
    return is;
}
