#include <string>

namespace dice { namespace hfe {

class BanList {
public:
    static BanList* getInstance();
    void consoleAddKeyToBanList(std::string const& key);
    void consoleAddKeyToBanList(std::string const& key, std::string const& addr);
};

class ConsoleClass331 {
public:
    char pad_00[0x30];
    int m_mode;              // +0x30
    std::string* m_arg0;     // +0x38
    std::string* m_arg1;     // +0x40
    char pad_48[0x108 - 0x48];
    char m_flag;             // +0x108
    int executeObjectMethod();
};

// FUNCTION: BF2 0x882ce0
int ConsoleClass331::executeObjectMethod() {
    if (m_mode == 1) {
        std::string key(*m_arg0);
        m_flag = 0;
        BanList::getInstance()->consoleAddKeyToBanList(key);
    } else if (m_mode == 2) {
        std::string key(*m_arg0);
        std::string addr(*m_arg1);
        m_flag = 0;
        BanList::getInstance()->consoleAddKeyToBanList(key, addr);
    }
    return 0;
}

} }
