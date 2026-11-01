// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x7b8780
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

namespace dice { namespace hfe { namespace console {

using dice::hfe::io::Console;

class InteractiveConsole : public Console {
public:
    virtual ~InteractiveConsole();

    bool m_b8;                            // +0x8
    char _pad9[7];
    std::deque<std::string> m_deque10;    // +0x10 (map .0x10, map_size .0x18, start .0x20-.0x40, finish .0x40-.0x60)
    int m_i60;                            // +0x60
    int _pad64;
    std::deque<std::string> m_deque68;    // +0x68
    int m_iB8;                            // +0xb8
    int m_iBC;                            // +0xbc
    char m_prompt[0x100];                 // +0xc0
    int m_i1C0;                           // +0x1c0
    int m_i1C4;                           // +0x1c4
    std::string m_str1C8;                 // +0x1c8
    int m_i1D0;                           // +0x1d0
    int m_i1D4;                           // +0x1d4
    std::string m_lines[12];              // +0x1e0
    int m_i240;                           // +0x240

    void getLines(int n, std::vector<std::string>& out) const;
};

void InteractiveConsole::getLines(int n, std::vector<std::string>& out) const
{
    int size = m_deque10.size();
    std::string line(m_str1C8);
    int start = 0;
    int count = n - 1;
    if (size > count) {
        start = size - count - m_i1D4 * m_i1D0;
        if (start < 0)
            start = 0;
    } else {
        count = size;
    }
    if (m_i1D4) count--;
    for (int i = 0; i < count; ++i)
        out.push_back(m_deque10[start + i]);
    if (m_i1D4 != 0)
        out.push_back("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
    line.append(m_prompt);
    out.push_back(line);
}

} } }
