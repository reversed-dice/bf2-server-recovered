// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x7af060
#include <string>
#include <deque>

namespace dice { namespace hfe { namespace io {

class OldConsole {
public:
    virtual ~OldConsole();

    char _pad0[0x88 - 0x8];
    std::deque<std::string> m_history;   // +0x88 .. +0xd8
    unsigned int m_maxHistorySize;       // +0xd8

    void addToCommandHistory(std::string const& cmd);
};

void OldConsole::addToCommandHistory(std::string const& cmd)
{
    if (cmd.size() == 0)
        return;
    if (m_history.size() != 0 && cmd == m_history[m_history.size() - 1])
        return;
    if (m_history.size() >= m_maxHistorySize)
        m_history.pop_front();
    m_history.push_back(cmd);
}

} } }
