#include <string>
// FUNCTION: BF2 0xae28d0
// BF2_FLAGS: -fno-strict-aliasing
namespace dice { namespace hfe { namespace animationTools { namespace {

class Bundle {
public:
    std::string listAnimations() const;
};

Bundle* getActiveBundle();

class ConsoleClass206 {
public:
    std::string* pad0();
    std::string* pad1();
    std::string* pad2();
    std::string* pad3();
    std::string* pad4();
    std::string* pad5();
    std::string* executeObjectMethod();
private:
    char m_pad0[0x30];
    int m_argc;
    char m_pad1[0x108 - 0x34];
    char m_hasResult;
    char m_pad2[0x110 - 0x109];
    std::string m_result;
};

std::string* ConsoleClass206::pad0()
{
    if (m_argc != 0)
        return 0;
    m_hasResult = 1;
    m_result = getActiveBundle()->listAnimations();
    return &m_result;
}
std::string* ConsoleClass206::pad1()
{
    if (m_argc != 0)
        return 0;
    m_hasResult = 1;
    m_result = getActiveBundle()->listAnimations();
    return &m_result;
}
std::string* ConsoleClass206::pad2()
{
    if (m_argc != 0)
        return 0;
    m_hasResult = 1;
    m_result = getActiveBundle()->listAnimations();
    return &m_result;
}
std::string* ConsoleClass206::pad3()
{
    if (m_argc != 0)
        return 0;
    m_hasResult = 1;
    m_result = getActiveBundle()->listAnimations();
    return &m_result;
}
std::string* ConsoleClass206::pad4()
{
    if (m_argc != 0)
        return 0;
    m_hasResult = 1;
    m_result = getActiveBundle()->listAnimations();
    return &m_result;
}
std::string* ConsoleClass206::pad5()
{
    if (m_argc != 0)
        return 0;
    m_hasResult = 1;
    m_result = getActiveBundle()->listAnimations();
    return &m_result;
}
std::string* ConsoleClass206::executeObjectMethod()
{
    if (m_argc != 0)
        return 0;
    m_hasResult = 1;
    m_result = getActiveBundle()->listAnimations();
    return &m_result;
}

} } } }
