// FUNCTION: BF2 0x87bc70
namespace dice { namespace hfe {

class BanList {
public:
    static BanList* getInstance();
    void consoleClearBanList();
};

class ConsoleClass334 {
public:
    bool executeObjectMethod();
    bool pad0();
private:
    char _pad0[0x30];
    int m_argc;
    char _pad1[0x108 - 0x34];
    unsigned char m_hasResult;
};

bool ConsoleClass334::pad0() {
    if (m_argc == 0) {
        m_hasResult = 0;
        BanList::getInstance()->consoleClearBanList();
    }
    return false;
}

bool ConsoleClass334::executeObjectMethod() {
    if (m_argc == 0) {
        m_hasResult = 0;
        BanList::getInstance()->consoleClearBanList();
    }
    return false;
}

} }
