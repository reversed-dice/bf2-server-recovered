// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x7b7d00
#include <deque>
#include <string>

namespace dice { namespace hfe { namespace console {

class InteractiveConsole {
public:
    void* _pad0;
    void* _pad8;
    std::deque<std::string> m_history;        // +0x10 .. +0x60
    int m_maxHistorySize;                     // +0x60
    char _pad64[4];                           // +0x64
    std::deque<std::string> m_commandHistory; // +0x68 .. +0xb8
    int m_maxCommandHistorySize;              // +0xb8

    void setMaxCommandHistorySize(int size);
};

void InteractiveConsole::setMaxCommandHistorySize(int size)
{
    m_maxCommandHistorySize = size;
    while (m_commandHistory.size() > (unsigned int)m_maxHistorySize) {
        m_commandHistory.pop_front();
    }
}

} } }
