// FUNCTION: BF2 0x415330
#include <istream>
#include <string>

// operator>>(std::istream&, enum&) -- reads one token and maps it onto the
// enum, leaving the enum at 0 for anything unrecognised.

extern "C" std::istream* op_415330(std::istream* is, int* out)
{
    std::string s;
    *is >> s;
    *out = 0;
    if (s.compare("TCGlobal") == 0) {
        *out = 0;
    } else if (s.compare("TCTeam") == 0) {
        *out = 1;
    } else if (s.compare("TCTeamAndLocalEnemies") == 0) {
        *out = 0x11;
    } else if (s.compare("TCCommander") == 0) {
        *out = 2;
    } else if (s.compare("TCSquad") == 0) {
        *out = 3;
    } else if (s.compare("TCSquadId") == 0) {
        *out = 5;
    } else if (s.compare("TCSquadLeader") == 0) {
        *out = 4;
    } else if (s.compare("TCSquadAndLocalEnemies") == 0) {
        *out = 0x12;
    } else if (s.compare("TCLocal") == 0) {
        *out = 9;
    } else if (s.compare("TCLocalTeamMedic") == 0) {
        *out = 6;
    } else if (s.compare("TCLocalRevive") == 0) {
        *out = 0xf;
    } else if (s.compare("TCAutoLocalRevive") == 0) {
        *out = 0x10;
    } else if (s.compare("TCLocalGroundVehicle") == 0) {
        *out = 7;
    } else if (s.compare("TCLocalAirVehicle") == 0) {
        *out = 8;
    } else if (s.compare("TCLocalTeam") == 0) {
        *out = 10;
    } else if (s.compare("TCVehicle") == 0) {
        *out = 0xb;
    } else if (s.compare("TCServerMessage") == 0) {
        *out = 0xc;
    } else if (s.compare("TCServerTeamMessage") == 0) {
        *out = 0xd;
    } else if (s.compare("TCPlayer") == 0) {
        *out = 0xe;
    }
    return is;
}
// REVERSED_FUNCTION: dice_hfe_operator_std_istreamref_dice_hfe_TargetChannelref (0x415330)
