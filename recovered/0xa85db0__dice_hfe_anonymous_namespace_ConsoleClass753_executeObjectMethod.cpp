// FUNCTION: BF2 0xa85db0
#include <string>

namespace dice { namespace hfe {
class MapList { public: static MapList* consoleWriteAccess(); bool load(bool); };
} }
namespace dice { namespace hfe {
struct ConsoleClass753 {
    char _p0[0x30];
    int m_argc;
    char _p1[0x108 - 0x34];
    unsigned char m_hasResult;
    char _p2[1];
    bool m_result;
    void* pad0();
    void* pad1();
    void* pad2();
    void* executeObjectMethod();
};
void* ConsoleClass753::pad0() {
    if (m_argc != 0) return 0;
    m_hasResult = 1;
    m_result = MapList::consoleWriteAccess()->load(false);
    return &m_result;
}
void* ConsoleClass753::pad1() {
    if (m_argc != 0) return 0;
    m_hasResult = 1;
    m_result = MapList::consoleWriteAccess()->load(false);
    return &m_result;
}
void* ConsoleClass753::pad2() {
    if (m_argc != 0) return 0;
    m_hasResult = 1;
    m_result = MapList::consoleWriteAccess()->load(false);
    return &m_result;
}
void* ConsoleClass753::executeObjectMethod() {
    if (m_argc != 0) return 0;
    m_hasResult = 1;
    m_result = MapList::consoleWriteAccess()->load(false);
    return &m_result;
}

}
}
