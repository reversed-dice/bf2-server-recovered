// BF2_FLAGS: -fno-strict-aliasing
#include <string>
// FUNCTION: BF2 0x9aec00

namespace dice { namespace hfe { namespace world { namespace {

class BundleTemplate {
public:
    std::string listTemplates() const;
};

extern unsigned int CID_BundleTemplate;
BundleTemplate* getActiveTemplate(unsigned int);

class ConsoleClass184 {
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

std::string* ConsoleClass184::pad0()
{
    if (m_argc != 0)
        return 0;
    m_hasResult = 1;
    m_result = getActiveTemplate(CID_BundleTemplate)->listTemplates();
    return &m_result;
}
std::string* ConsoleClass184::pad1()
{
    if (m_argc != 0)
        return 0;
    m_hasResult = 1;
    m_result = getActiveTemplate(CID_BundleTemplate)->listTemplates();
    return &m_result;
}
std::string* ConsoleClass184::pad2()
{
    if (m_argc != 0)
        return 0;
    m_hasResult = 1;
    m_result = getActiveTemplate(CID_BundleTemplate)->listTemplates();
    return &m_result;
}
std::string* ConsoleClass184::pad3()
{
    if (m_argc != 0)
        return 0;
    m_hasResult = 1;
    m_result = getActiveTemplate(CID_BundleTemplate)->listTemplates();
    return &m_result;
}
std::string* ConsoleClass184::pad4()
{
    if (m_argc != 0)
        return 0;
    m_hasResult = 1;
    m_result = getActiveTemplate(CID_BundleTemplate)->listTemplates();
    return &m_result;
}
std::string* ConsoleClass184::pad5()
{
    if (m_argc != 0)
        return 0;
    m_hasResult = 1;
    m_result = getActiveTemplate(CID_BundleTemplate)->listTemplates();
    return &m_result;
}

std::string* ConsoleClass184::executeObjectMethod()
{
    if (m_argc != 0)
        return 0;
    m_hasResult = 1;
    m_result = getActiveTemplate(CID_BundleTemplate)->listTemplates();
    return &m_result;
}

} } } }
