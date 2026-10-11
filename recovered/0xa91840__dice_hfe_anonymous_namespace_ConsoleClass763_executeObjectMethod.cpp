// FUNCTION: BF2 0xa91840
#include <string>

namespace dice { namespace hfe {

class MapList {
public:
    static MapList* consoleWriteAccess();
    bool insertEntry(int, std::string const&, std::string const&, int, bool);
};

class ConsoleClass763 {
public:
    void* executeObjectMethod();

    char m_pad0[0x30];
    int m_argc;
    char m_pad1[4];
    int* m_id;
    std::string* m_a;
    std::string* m_b;
    int* m_n;
    char m_pad2[0xb0];
    char m_active;
    char m_pad3[1];
    char m_result;
};

void* ConsoleClass763::executeObjectMethod()
{
    if (m_argc == 3) {
        int id = *m_id;
        std::string a(*m_a);
        std::string b(*m_b);
        m_active = 1;
        m_result = MapList::consoleWriteAccess()->insertEntry(id, a, b, 0, false);
        return &m_result;
    }
    if (m_argc == 4) {
        int id = *m_id;
        std::string a(*m_a);
        std::string b(*m_b);
        int n = *m_n;
        m_active = 1;
        m_result = MapList::consoleWriteAccess()->insertEntry(id, a, b, n, false);
        return &m_result;
    }
    return 0;
}

} }
