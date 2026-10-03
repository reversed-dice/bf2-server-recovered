// FUNCTION: BF2 0x483cc0
class GameLogic {
public:
    unsigned int getNumDropVehiclesForTeam(int team) const;
};

unsigned int GameLogic::getNumDropVehiclesForTeam(int team) const {
    int idx = team - 1;
    unsigned int result = 0;
    if ((unsigned int)idx <= 1u) goto body;
    return result;
body:
    result = ((const unsigned int*)((const char*)this + 0x348))[idx];
    return result;
}
// REVERSED_FUNCTION: dice_hfe_GameLogic::getNumDropVehiclesForTeam_int (0x483cc0)