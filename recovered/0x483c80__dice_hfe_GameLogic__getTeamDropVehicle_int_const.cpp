// FUNCTION: BF2 0x483c80
namespace dice { namespace hfe {

extern const char* dice_hfe_emptyString;

class GameLogic {
public:
    const char** getTeamDropVehicle_int_const(int param) const;
};

const char** GameLogic::getTeamDropVehicle_int_const(int param) const {
    int index = param - 1;
    if ((unsigned int)index > 1)
        return &dice_hfe_emptyString;
    return &((const char**)((const char*)this + 0x338))[index];
}

} }
// REVERSED_FUNCTION: dice_hfe_GameLogic::getTeamDropVehicle_int_const (0x483c80)