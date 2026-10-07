#include <string>
// FUNCTION: BF2 0x8829c0
// BF2_FLAGS: -fno-strict-aliasing
namespace dice { namespace hfe { namespace {

class BanList {
public:
    static BanList* getInstance();
    std::string consoleListBannedKeys() const;
};

class ConsoleClass336 {
public:
    std::string* pad0();
    std::string* pad1();
    std::string* pad2();
    std::string* pad3();
    std::string* executeObjectMethod();
private:
    char m_pad0[0x30];
    int m_argc;
    char m_pad1[0x108 - 0x34];
    char m_hasResult;
    char m_pad2[0x110 - 0x109];
    std::string m_result;
};

std::string* ConsoleClass336::pad0()
{
    if (m_argc != 0)
        return 0;
    m_hasResult = 1;
    m_result = BanList::getInstance()->consoleListBannedKeys();
    return &m_result;
}
std::string* ConsoleClass336::pad1()
{
    if (m_argc != 0)
        return 0;
    m_hasResult = 1;
    m_result = BanList::getInstance()->consoleListBannedKeys();
    return &m_result;
}
std::string* ConsoleClass336::pad2()
{
    if (m_argc != 0)
        return 0;
    m_hasResult = 1;
    m_result = BanList::getInstance()->consoleListBannedKeys();
    return &m_result;
}
std::string* ConsoleClass336::pad3()
{
    if (m_argc != 0)
        return 0;
    m_hasResult = 1;
    m_result = BanList::getInstance()->consoleListBannedKeys();
    return &m_result;
}
std::string* ConsoleClass336::executeObjectMethod()
{
    if (m_argc != 0)
        return 0;
    m_hasResult = 1;
    m_result = BanList::getInstance()->consoleListBannedKeys();
    return &m_result;
}

} } }
