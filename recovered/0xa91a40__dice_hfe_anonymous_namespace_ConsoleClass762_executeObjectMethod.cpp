// FUNCTION: BF2 0xa91a40
// BF2_FLAGS: -fno-strict-aliasing
#include <string>

namespace dice { namespace hfe {

class MapList {
public:
    static MapList* consoleWriteAccess();
    bool appendEntry(std::string const&, std::string const&, int, bool);
};

class ConsoleObjectBaseImpl {
public:
    virtual ~ConsoleObjectBaseImpl();
    char m_base[0x28];
};

namespace {

class ConsoleClass762 : public ConsoleObjectBaseImpl {
public:
    int m_30;
    std::string* m_38;
    std::string* m_40;
    int* m_48;
    char m_pad[0x108 - 0x50];
    bool m_108;
    bool m_109;
    bool m_10a;

    bool* executeObjectMethod();
};

bool* ConsoleClass762::executeObjectMethod() {
    if (m_30 == 2) {
        std::string a(*m_38);
        std::string b(*m_40);
        m_108 = true;
        m_10a = MapList::consoleWriteAccess()->appendEntry(a, b, 0, false);
        return &m_10a;
    }
    if (m_30 == 3) {
        std::string a(*m_38);
        std::string b(*m_40);
        int n = *m_48;
        m_108 = true;
        m_10a = MapList::consoleWriteAccess()->appendEntry(a, b, n, false);
        return &m_10a;
    }
    return 0;
}

}

} }
