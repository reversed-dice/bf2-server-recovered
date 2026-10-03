// FUNCTION: BF2 0x483b50
#include <string>

namespace dice { namespace hfe {

class GameLogic {
public:
    void setTeamLanguage(int team, const std::string& language);
};

void GameLogic::setTeamLanguage(int team, const std::string& language) {
    int idx = team - 1;
    if ((unsigned int)idx > 1) return;
    reinterpret_cast<std::string*>(reinterpret_cast<char*>(this) + 0x310)[idx].assign(language);
}

} }
// REVERSED_FUNCTION: dice_hfe_GameLogic::setTeamLanguage_int_std_string_constref (0x483b50)