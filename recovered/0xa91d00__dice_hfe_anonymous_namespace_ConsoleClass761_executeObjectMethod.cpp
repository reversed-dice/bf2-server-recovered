#include <string>
// FUNCTION: BF2 0xa91d00
// BF2_FLAGS: -fno-strict-aliasing
namespace dice { namespace hfe { namespace {

class MapList {
public:
    static MapList* consoleReadAccess();
    std::string formatListForConsole(bool) const;
};

class ConsoleClass761 {
public:
    std::string* pad0();
    std::string* pad1();
    std::string* pad2();
    std::string* pad3();
    std::string* pad4();
    std::string* pad5();
    std::string* pad6();
    std::string* pad7();
    std::string* executeObjectMethod();
private:
    char m_pad0[0x30];
    int m_argc;
    char m_pad1[0x108 - 0x34];
    char m_hasResult;
    char m_pad2[0x110 - 0x109];
    std::string m_result;
};

std::string* ConsoleClass761::pad0()
{
    if (m_argc != 0)
        return 0;
    m_hasResult = 1;
    m_result = MapList::consoleReadAccess()->formatListForConsole(false);
    return &m_result;
}
std::string* ConsoleClass761::pad1()
{
    if (m_argc != 0)
        return 0;
    m_hasResult = 1;
    m_result = MapList::consoleReadAccess()->formatListForConsole(false);
    return &m_result;
}
std::string* ConsoleClass761::pad2()
{
    if (m_argc != 0)
        return 0;
    m_hasResult = 1;
    m_result = MapList::consoleReadAccess()->formatListForConsole(false);
    return &m_result;
}
std::string* ConsoleClass761::pad3()
{
    if (m_argc != 0)
        return 0;
    m_hasResult = 1;
    m_result = MapList::consoleReadAccess()->formatListForConsole(false);
    return &m_result;
}
std::string* ConsoleClass761::pad4()
{
    if (m_argc != 0)
        return 0;
    m_hasResult = 1;
    m_result = MapList::consoleReadAccess()->formatListForConsole(false);
    return &m_result;
}
std::string* ConsoleClass761::pad5()
{
    if (m_argc != 0)
        return 0;
    m_hasResult = 1;
    m_result = MapList::consoleReadAccess()->formatListForConsole(false);
    return &m_result;
}
std::string* ConsoleClass761::pad6()
{
    if (m_argc != 0)
        return 0;
    m_hasResult = 1;
    m_result = MapList::consoleReadAccess()->formatListForConsole(false);
    return &m_result;
}
std::string* ConsoleClass761::pad7()
{
    if (m_argc != 0)
        return 0;
    m_hasResult = 1;
    m_result = MapList::consoleReadAccess()->formatListForConsole(false);
    return &m_result;
}
std::string* ConsoleClass761::executeObjectMethod()
{
    if (m_argc != 0)
        return 0;
    m_hasResult = 1;
    m_result = MapList::consoleReadAccess()->formatListForConsole(false);
    return &m_result;
}

} } }
