// FUNCTION: BF2 0x7ba650
// BF2_FLAGS: -fno-strict-aliasing -fno-ivopts
#include <deque>
#include <string>

namespace dice { namespace hfe { namespace io {

class Console {
public:
    Console() {}
    virtual ~Console();
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

class InteractiveConsole : public io::Console {
public:
    InteractiveConsole(io::Console* c);
    virtual ~InteractiveConsole();

    bool m_b8;                            // +0x8
    char _pad9[7];
    std::deque<std::string> m_deque10;    // +0x10
    int m_i60;                            // +0x60
    int _pad64;
    std::deque<std::string> m_deque68;    // +0x68
    int m_iB8;                            // +0xb8
    int m_iBC;                            // +0xbc
    bool m_bC0;                           // +0xc0
    char _padC1[7];
    char _padC8[0xf8];                    // +0xc8
    int m_i1C0;                           // +0x1c0
    int m_i1C4;                           // +0x1c4
    std::string m_str1C8;                 // +0x1c8
    int m_i1D0;                           // +0x1d0
    char _pad1D4[0xc];
    std::string m_lines[12];              // +0x1e0
    int m_i240;                           // +0x240
    bool m_b244;                          // +0x244
    char _pad245[3];
    int m_i248;                           // +0x248
    bool m_b24C;                          // +0x24c
    bool m_b24D;                          // +0x24d
    bool m_b24E;                          // +0x24e
    char _pad24F[1];
    io::Console* m_console;               // +0x250
    void* m_p258;                         // +0x258
};

InteractiveConsole::InteractiveConsole(io::Console* c)
    : m_deque10(),
      m_i60(0x400),
      m_deque68(),
      m_iB8(0xa),
      m_iBC(0),
      m_i1C0(0x4d),
      m_i1C4(0),
      m_str1C8("> "),
      m_i1D0(8),
      m_i240(0x2710),
      m_b244(false),
      m_i248(0),
      m_b24C(false),
      m_b24D(true),
      m_b24E(true),
      m_console(c)
{
    m_p258 = m_console->v7();
    m_b8 = false;
    m_bC0 = false;
}

} } }
