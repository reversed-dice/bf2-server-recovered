// FUNCTION: BF2 0x483b80
namespace dice { namespace hfe {

extern const char* dice_hfe_emptyString;

class GameLogic {
public:
    const char** getTeamLanguage(int team) const;

private:
    char _pad_0x000[0x310];
    const char* m_teamLanguages[2];
};

const char** GameLogic::getTeamLanguage(int team) const {
    const char** result = &dice_hfe_emptyString;
    int idx = team - 1;
    if (static_cast<unsigned int>(idx) <= 1U) {
        result = const_cast<const char**>(&m_teamLanguages[idx]);
    }
    return result;
}

} }
// REVERSED_FUNCTION: dice_hfe_GameLogic::getTeamLanguage_int_const (0x483b80)