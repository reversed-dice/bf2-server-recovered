// FUNCTION: BF2 0x7aa790
#include <string>
#include <vector>
#include <deque>
#include <string.h>

namespace dice { namespace hfe { namespace io {

class OldConsole {
public:
    virtual ~OldConsole();
    virtual void v10();
    virtual void v18();
    virtual void v20();
    virtual void v28();
    virtual void updateAsciiKey(char c);

    char _pad0[0x30 - 0x8];
    std::deque<std::string> m_history;   // +0x30 .. +0x80
    int m_maxHistorySize;                // +0x80
    int m_numNew;                        // +0x84
    char _pad1[0xdc - 0x88];
    char m_line[0x220 - 0xdc];           // +0xdc
    bool m_extended;                     // +0x220

    void update(char c, std::string& line, std::vector<std::string>& history);
};

void OldConsole::update(char c, std::string& line, std::vector<std::string>& history)
{
    if (m_extended) {
        if (c == 'H')
            c = 0x10;
        else if (c == 'P')
            c = 0x0e;
        m_extended = false;
    }
    if (c == (char)0xe0) {
        m_extended = true;
        return;
    }
    updateAsciiKey(c);
    line.assign(m_line, strlen(m_line));
    unsigned int i = 0;
    int n = (int)m_history.size() - m_numNew;
    if (n > 0)
        i = n;
    while (i < m_history.size()) {
        history.push_back(m_history[i]);
        ++i;
    }
    m_numNew = 0;
}

} } }
