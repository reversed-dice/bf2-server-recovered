// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x7acba0
#include <deque>
#include <string>
#include <vector>
#include <cstring>

namespace dice { namespace hfe { namespace io {

class Console {
public:
    Console() {}
    virtual ~Console() {}
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void* v7();
};

} } }

namespace dice { namespace hfe { namespace io {

using dice::hfe::io::Console;

class OldConsole : public Console {
public:
    virtual ~OldConsole();

    char _pad8[0x28];                     // +0x8
    std::deque<std::string> m_deque30;    // +0x30 (map .0x30, map_size .0x38, start .0x40-.0x60, finish .0x60-.0x80)
    char _pad80[0x5c];                    // +0x80
    char m_prompt[0x94];                  // +0xdc
    std::string m_str170;                 // +0x170
    int m_i178;                           // +0x178
    int m_i17C;                           // +0x17c

    void getLines(int n, std::vector<std::string>& out) const;
};

void OldConsole::getLines(int n, std::vector<std::string>& out) const
{
    int size = m_deque30.size();
    std::string line(m_str170);
    int start = 0;
    int count = n - 1;
    if (size > count) {
        start = size - count - m_i17C * m_i178;
        if (start < 0)
            start = 0;
    } else {
        count = size;
    }
    if (m_i17C) count--;
    for (int i = 0; i < count; ++i)
        out.push_back(m_deque30[start + i]);
    if (m_i17C != 0)
        out.push_back("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
    line.append(m_prompt);
    out.push_back(line);
}

} } }
