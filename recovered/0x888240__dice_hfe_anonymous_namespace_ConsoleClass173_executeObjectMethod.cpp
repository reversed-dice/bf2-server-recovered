// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x888240
#include <string>

namespace dice { namespace hfe {

class VoiceMessages {
public:
    int addRadioVoice(std::string const& a, std::string const& b,
                      std::string const& c, std::string const& d, int kind);
};

namespace {

VoiceMessages* getVoiceMessages();

class ConsoleClass173 {
public:
    virtual ~ConsoleClass173();
    virtual void* executeObjectMethod();
    char pad[0x30 - 0x8];
    int m_argc;                         // 0x30
    char pad1[4];
    std::string* m_arg0;                // 0x38
    std::string* m_arg1;                // 0x40
    std::string* m_arg2;                // 0x48
    std::string* m_arg3;                // 0x50
    char pad2[0x108 - 0x58];
    char m_active;                      // 0x108
    char pad3[3];
    int m_result;                       // 0x10c
};

void* ConsoleClass173::executeObjectMethod()
{
    if (m_argc == 3) {
        std::string a0(*m_arg0);
        std::string a1(*m_arg1);
        std::string a2(*m_arg2);
        m_active = 1;
        m_result = getVoiceMessages()->addRadioVoice(a0, a1, a2, std::string(""), 0);
        return &m_result;
    }
    if (m_argc == 4) {
        std::string a0(*m_arg0);
        std::string a1(*m_arg1);
        std::string a2(*m_arg2);
        std::string a3(*m_arg3);
        m_active = 1;
        m_result = getVoiceMessages()->addRadioVoice(a0, a1, a2, a3, 0);
        return &m_result;
    }
    if (m_argc == 5) {
        std::string a0(*m_arg0);
        std::string a1(*m_arg1);
        std::string a2(*m_arg2);
        std::string a3(*m_arg3);
        int kind = **(int**)((char*)this + 0x58);
        m_active = 1;
        m_result = getVoiceMessages()->addRadioVoice(a0, a1, a2, a3, kind);
        return &m_result;
    }
    return 0;
}

}

} }
