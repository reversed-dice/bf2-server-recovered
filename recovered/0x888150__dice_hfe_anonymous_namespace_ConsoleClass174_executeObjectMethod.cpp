// FUNCTION: BF2 0x888150
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
namespace dice { namespace hfe {

class VoiceMessages {
public:
    int addRadioFilter(const std::string& a, const std::string& b);
};

namespace {

VoiceMessages* getVoiceMessages();

class ConsoleClass174 {
public:
    virtual ~ConsoleClass174();
    void* executeObjectMethod();
    unsigned char _pad0[0x30 - 8];
    int m_argc;
    unsigned char _pad1[4];
    const std::string* m_arg0;
    const std::string* m_arg1;
    unsigned char _pad2[0x108 - 0x48];
    bool m_hasResult;
    unsigned char _pad3[3];
    int m_result;
};

void* ConsoleClass174::executeObjectMethod()
{
    if (m_argc != 2)
        return 0;
    std::string a(*m_arg0);
    std::string b(*m_arg1);
    m_hasResult = true;
    m_result = getVoiceMessages()->addRadioFilter(a, b);
    return &m_result;
}

}
} }
