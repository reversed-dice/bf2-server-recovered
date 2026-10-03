// FUNCTION: BF2 0x7aa710
#include <string>

namespace dice { namespace hfe { namespace io {

class OldConsole {
public:
    char        _pad0[0x170];
    std::string m_prompt;
    void setPrompt(const std::string& p);
};

void OldConsole::setPrompt(const std::string& p)
{
    std::string tmp(p);
    tmp.append(" ", 1);
    m_prompt.assign(tmp);
}

} } }
// REVERSED_FUNCTION: dice_hfe_io_OldConsole_setPrompt_std_string_constref (0x7aa710)
