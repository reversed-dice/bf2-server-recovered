// FUNCTION: BF2 0xa85e40
#include <string>

namespace dice { namespace hfe {
class MapList { public: static MapList* consoleReadAccess(); bool save() const; };
} }
namespace dice { namespace hfe {
struct ConsoleClass754 {
    char _p0[0x30];
    int m_argc;
    char _p1[0x108 - 0x34];
    unsigned char m_hasResult;
    char _p2[1];
    bool m_result;
    void* pad0();
    void* pad1();
    void* pad2();
    void* pad3();
    void* executeObjectMethod();
};
void* ConsoleClass754::pad0() {
    if (m_argc != 0) return 0;
    m_hasResult = 1;
    m_result = MapList::consoleReadAccess()->save();
    return &m_result;
}
void* ConsoleClass754::pad1() {
    if (m_argc != 0) return 0;
    m_hasResult = 1;
    m_result = MapList::consoleReadAccess()->save();
    return &m_result;
}
void* ConsoleClass754::pad2() {
    if (m_argc != 0) return 0;
    m_hasResult = 1;
    m_result = MapList::consoleReadAccess()->save();
    return &m_result;
}
void* ConsoleClass754::pad3() {
    if (m_argc != 0) return 0;
    m_hasResult = 1;
    m_result = MapList::consoleReadAccess()->save();
    return &m_result;
}
void* ConsoleClass754::executeObjectMethod() {
    if (m_argc != 0) return 0;
    m_hasResult = 1;
    m_result = MapList::consoleReadAccess()->save();
    return &m_result;
}

}
}
