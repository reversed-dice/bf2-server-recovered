// FUNCTION: BF2 0x483ca0
namespace dice { namespace hfe {

class GameLogic {
public:
    void setNumDropVehiclesForTeam(int team, int numVehicles);

private:
    char _pad_0x000[0x348];
    int m_numDropVehiclesForTeam[2]; // offset 0x348
};

void GameLogic::setNumDropVehiclesForTeam(int team, int numVehicles) {
    int idx = team - 1;
    if ((unsigned)idx <= 1u) goto store;
    return;
store:
    m_numDropVehiclesForTeam[idx] = numVehicles;
}

} }
// REVERSED_FUNCTION: dice_hfe_GameLogic::setNumDropVehiclesForTeam_int_int (0x483ca0)