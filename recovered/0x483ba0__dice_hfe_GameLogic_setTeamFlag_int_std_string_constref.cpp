// FUNCTION: BF2 0x483ba0
#include <string>
namespace dice { namespace hfe {

class GameLogic {
public:
    void setTeamFlag(int id, std::string const& s);
};

extern void func_408238(void*, std::string const&);

void GameLogic::setTeamFlag(int id, std::string const& s) {
    if ((unsigned int)id > 2) return;
    func_408238((char*)this + 0x320 + (long long)id * 8, s);
}

} }
// REVERSED_FUNCTION: dice_hfe_GameLogic_setTeamFlag_int_std_string_constref (0x483ba0)
