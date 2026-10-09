// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x7b7de0
#include <deque>
#include <string>

namespace dice { namespace hfe { namespace console {

class InteractiveConsole {
public:
    void* _pad0;
    void* _pad8;
    std::deque<std::string> m_history; // sizeof(std::deque) = 0x50, so +0x10 to +0x60
    int m_maxHistorySize;               // +0x60

    void setMaxHistorySize(int size);
};

void InteractiveConsole::setMaxHistorySize(int size)
{
    m_maxHistorySize = size;
    while (m_history.size() > (unsigned int)m_maxHistorySize) {
        m_history.pop_front();
    }
}

} } }
