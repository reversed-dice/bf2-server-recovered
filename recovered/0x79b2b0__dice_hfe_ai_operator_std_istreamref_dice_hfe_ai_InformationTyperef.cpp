// FUNCTION: BF2 0x79b2b0
#include <string>

extern "C" {
    std::istream* op_79af00(std::istream* is, std::string* s);
}

extern "C" std::istream& operator_0x79b2b0(std::istream& is, int* out) {
    std::string s;
    is >> s;
    if (s.compare("ITProduction") == 0) { *out = 0; }
    else if (s.compare("ITAmmunition") == 0) { *out = 1; }
    else if (s.compare("ITRepair") == 0) { *out = 2; }
    else if (s.compare("ITUnit") == 0) { *out = 3; }
    else if (s.compare("ITAir") == 0) { *out = 4; }
    else if (s.compare("ITGround") == 0) { *out = 6; }
    else if (s.compare("ITNaval") == 0) { *out = 7; }
    else if (s.compare("ITControlpoint") == 0) { *out = 8; }
    else if (s.compare("ITRadar") == 0) { *out = 9; }
    else if (s.compare("ITAirfield") == 0) { *out = 10; }
    else if (s.compare("ITTransportation") == 0) { *out = 11; }
    else if (s.compare("ITArtillery") == 0) { *out = 12; }
    else if (s.compare("ITFixed") == 0) { *out = 13; }
    else if (s.compare("ITCover") == 0) { *out = 14; }
    else if (s.compare("ITMobile") == 0) { *out = 15; }
    else if (s.compare("ITHasWreck") == 0) { *out = 24; }
    else if (s.compare("ITObstacle") == 0) { *out = 25; }
    else if (s.compare("ITHasCarHorn") == 0) { *out = 26; }
    else if (s.compare("ITUnmanned") == 0) { *out = 16; }
    else if (s.compare("ITLowPriority") == 0) { *out = 17; }
    else if (s.compare("ITStructure") == 0) { *out = 18; }
    else if (s.compare("ITBiological") == 0) { *out = 19; }
    else if (s.compare("ITVegetation") == 0) { *out = 20; }
    else if (s.compare("ITSoldier") == 0) { *out = 21; }
    else if (s.compare("ITObstructedView") == 0) { *out = 22; }
    else if (s.compare("ITNoTemperature") == 0) { *out = 23; }
    else if (s.compare("ITHelicopter") == 0) { *out = 5; }
    else { *out = -1; }
    return is;
}
// REVERSED_FUNCTION: dice_hfe_ai_operator_std_istreamref_dice_hfe_ai_InformationTyperef (0x79b2b0)
