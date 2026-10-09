// FUNCTION: BF2 0x7b7cc0
#include <string>

namespace dice { namespace hfe { namespace console {

class InteractiveConsole {
public:
    char _pad[0x1e0];
    std::string m_boundScripts[12];

    bool bindKeyToConsoleScript(int key, std::string const& script);
};

bool InteractiveConsole::bindKeyToConsoleScript(int key, std::string const& script)
{
    int idx = key - 1;
    if ((unsigned int)idx > 11)
        return false;
    m_boundScripts[idx] = script;
    return true;
}

} } }
