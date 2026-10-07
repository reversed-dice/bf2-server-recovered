#include <string>
// FUNCTION: BF2 0xafaaa0
// BF2_FLAGS: -fno-strict-aliasing
namespace dice { namespace hfe { namespace world { namespace {

class PhysicsSystem {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual std::string getValue() const;
};

extern PhysicsSystem* basicPhysicsSystem;

class ConsoleClass143 {
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

std::string* ConsoleClass143::pad0()
{
    if (m_argc != 0)
        return 0;
    m_hasResult = 1;
    m_result = basicPhysicsSystem->getValue();
    return &m_result;
}
std::string* ConsoleClass143::pad1()
{
    if (m_argc != 0)
        return 0;
    m_hasResult = 1;
    m_result = basicPhysicsSystem->getValue();
    return &m_result;
}
std::string* ConsoleClass143::pad2()
{
    if (m_argc != 0)
        return 0;
    m_hasResult = 1;
    m_result = basicPhysicsSystem->getValue();
    return &m_result;
}
std::string* ConsoleClass143::pad3()
{
    if (m_argc != 0)
        return 0;
    m_hasResult = 1;
    m_result = basicPhysicsSystem->getValue();
    return &m_result;
}
std::string* ConsoleClass143::pad4()
{
    if (m_argc != 0)
        return 0;
    m_hasResult = 1;
    m_result = basicPhysicsSystem->getValue();
    return &m_result;
}
std::string* ConsoleClass143::pad5()
{
    if (m_argc != 0)
        return 0;
    m_hasResult = 1;
    m_result = basicPhysicsSystem->getValue();
    return &m_result;
}
std::string* ConsoleClass143::executeObjectMethod()
{
    if (m_argc != 0)
        return 0;
    m_hasResult = 1;
    m_result = basicPhysicsSystem->getValue();
    return &m_result;
}

} } } }
