#include <string>
// FUNCTION: BF2 0x75b3b0
// BF2_FLAGS: -fno-strict-aliasing
namespace dice { namespace hfe { namespace {

class Sound {
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
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual std::string getValue() const;
};

extern Sound* g_bfSound;

class ConsoleClass178 {
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

std::string* ConsoleClass178::pad0()
{
    if (m_argc != 0)
        return 0;
    m_hasResult = 1;
    m_result = g_bfSound->getValue();
    return &m_result;
}
std::string* ConsoleClass178::pad1()
{
    if (m_argc != 0)
        return 0;
    m_hasResult = 1;
    m_result = g_bfSound->getValue();
    return &m_result;
}
std::string* ConsoleClass178::pad2()
{
    if (m_argc != 0)
        return 0;
    m_hasResult = 1;
    m_result = g_bfSound->getValue();
    return &m_result;
}
std::string* ConsoleClass178::pad3()
{
    if (m_argc != 0)
        return 0;
    m_hasResult = 1;
    m_result = g_bfSound->getValue();
    return &m_result;
}
std::string* ConsoleClass178::pad4()
{
    if (m_argc != 0)
        return 0;
    m_hasResult = 1;
    m_result = g_bfSound->getValue();
    return &m_result;
}
std::string* ConsoleClass178::pad5()
{
    if (m_argc != 0)
        return 0;
    m_hasResult = 1;
    m_result = g_bfSound->getValue();
    return &m_result;
}
std::string* ConsoleClass178::executeObjectMethod()
{
    if (m_argc != 0)
        return 0;
    m_hasResult = 1;
    m_result = g_bfSound->getValue();
    return &m_result;
}

} } }
