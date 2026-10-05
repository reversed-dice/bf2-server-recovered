// FUNCTION: BF2 0x860c30
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
namespace dice { namespace hfe {

class ITarget0x860c30 {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8();
    virtual bool method(const std::string& a, const std::string& b);
};

extern ITarget0x860c30* g_target0x860c30;

namespace io {
namespace {

class ConsoleClass562 {
public:
    virtual ~ConsoleClass562();
    void* executeObjectMethod();
    unsigned char _pad0[0x30 - 8];
    int m_argc;
    unsigned char _pad1[4];
    const std::string* m_arg0;
    const std::string* m_arg1;
    unsigned char _pad2[0x108 - 0x48];
    bool m_hasResult;
    unsigned char _pad3;
    bool m_result;
};

void* ConsoleClass562::executeObjectMethod()
{
    if (m_argc != 2)
        return 0;
    std::string a(*m_arg0);
    std::string b(*m_arg1);
    m_hasResult = true;
    m_result = g_target0x860c30->method(a, b);
    return &m_result;
}

}
} } }
