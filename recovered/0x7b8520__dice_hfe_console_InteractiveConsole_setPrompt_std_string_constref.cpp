// FUNCTION: BF2 0x7b8520
#include <string>

namespace dice { namespace hfe { namespace console {

class InteractiveConsole {
public:
    char        _pad0[0x1c8];
    std::string m_prompt;
    void setPrompt(const std::string& p);
};

void InteractiveConsole::setPrompt(const std::string& p)
{
    std::string tmp(p);
    tmp.append(" ", 1);
    m_prompt.assign(tmp);
}

} } }
// REVERSED_FUNCTION: dice_hfe_console_InteractiveConsole_setPrompt_std_string_constref (0x7b8520)
