// FUNCTION: BF2 0x874770
// operator>>(std::istream&, enum&) -- reads one token and maps it onto the
// Medal enum, leaving the enum at 25 for anything unrecognised.

#include <istream>
#include <string>

extern "C" std::istream* op_874770(std::istream* is, int* out)
{
    std::string s;
    *is >> s;
    if (s.compare("MKillingSpree") == 0 || s.compare("KillingSpree") == 0) {
        *out = 0;
    } else if (s.compare("MTankBuster") == 0 || s.compare("TankBuster") == 0) {
        *out = 1;
    } else if (s.compare("MTankGunner") == 0 || s.compare("TankGunner") == 0) {
        *out = 2;
    } else if (s.compare("MFighterPilot") == 0 || s.compare("FighterPilot") == 0) {
        *out = 3;
    } else if (s.compare("MFighterStrafing") == 0 || s.compare("FighterStrafing") == 0) {
        *out = 4;
    } else if (s.compare("MFighterBomber") == 0 || s.compare("FighterBomber") == 0) {
        *out = 5;
    } else if (s.compare("MMedic") == 0 || s.compare("Medic") == 0) {
        *out = 6;
    } else if (s.compare("MEngineer") == 0 || s.compare("Engineer") == 0) {
        *out = 7;
    } else if (s.compare("MEagleEye") == 0 || s.compare("EagleEye") == 0) {
        *out = 8;
    } else if (s.compare("MMachineGunner") == 0 || s.compare("MachineGunner") == 0) {
        *out = 9;
    } else if (s.compare("MGrenadier") == 0 || s.compare("Grenadier") == 0) {
        *out = 10;
    } else if (s.compare("MBuggyStuntman") == 0 || s.compare("BuggyStuntman") == 0) {
        *out = 11;
    } else if (s.compare("MHelicopterPilot") == 0 || s.compare("HelicopterPilot") == 0) {
        *out = 12;
    } else if (s.compare("MHelicopterGunner") == 0 || s.compare("HelicopterGunner") == 0) {
        *out = 13;
    } else if (s.compare("MPurpleHeart") == 0 || s.compare("PurpleHeart") == 0) {
        *out = 14;
    } else if (s.compare("MBazooka") == 0 || s.compare("Bazooka") == 0) {
        *out = 15;
    } else if (s.compare("MButcher") == 0 || s.compare("Butcher") == 0) {
        *out = 16;
    } else if (s.compare("MCommanderWinning") == 0 || s.compare("CommanderWinning") == 0) {
        *out = 17;
    } else if (s.compare("MCommanderSurviving") == 0 || s.compare("CommanderSurviving") == 0) {
        *out = 18;
    } else if (s.compare("MCommanderKills") == 0 || s.compare("CommanderKills") == 0) {
        *out = 19;
    } else if (s.compare("MCommanderAssasin") == 0 || s.compare("CommanderAssasin") == 0) {
        *out = 20;
    } else if (s.compare("MMiddleEastWins") == 0 || s.compare("MiddleEastWins") == 0) {
        *out = 21;
    } else if (s.compare("MAsiaWins") == 0 || s.compare("AsiaWins") == 0) {
        *out = 22;
    } else if (s.compare("MEuropeWins") == 0 || s.compare("EuropeWins") == 0) {
        *out = 23;
    } else if (s.compare("MAirService") == 0 || s.compare("AirService") == 0) {
        *out = 24;
    } else {
        *out = 25;
    }
    return is;
}
// REVERSED_FUNCTION: dice_hfe_operator_std_istreamref_dice_hfe_world_Medalref (0x874770)
