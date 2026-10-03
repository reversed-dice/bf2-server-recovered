// FUNCTION: BF2 0x483bd0
namespace dice { namespace hfe {

class GameLogic {
public:
    char* getTeamFlag(int id);
};

char* GameLogic::getTeamFlag(int id) {
    if ((unsigned int)id > 2) return (char*)0x108cad0;
    return (char*)this + 0x320 + (long long)id * 8;
}

} }
// REVERSED_FUNCTION: dice_hfe_GameLogic_getTeamFlag_int_const (0x483bd0)
