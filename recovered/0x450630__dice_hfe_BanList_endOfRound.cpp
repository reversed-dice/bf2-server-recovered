// FUNCTION: BF2 0x450630
#include <map>
#include <string>

namespace dice { namespace hfe { namespace io {

class Console {
public:
    static const std::string ignoredString_;
};

class IConsole {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual bool executeCommand(const std::string& cmd, std::string& result, int a, int b, int c, int d, int e);
    virtual void c4();
    virtual void c5();
    virtual void c6();
    virtual void c7();
    virtual void c8();
    virtual void c9();
    virtual void execute(const std::string& file, const std::string& a1, const std::string& a2,
                         const std::string& a3, const std::string& a4, const std::string& a5,
                         const std::string& a6, const std::string& a7, const std::string& a8,
                         const std::string& ignored);
};

extern IConsole* mainConsole;

} } }

namespace dice { namespace hfe {

struct BanInfo {
    char pad[0x20];
};

class BanList {
public:
    std::map<std::string, BanInfo> m_keys;
    std::map<std::string, BanInfo> m_addresses;
    std::map<std::string, BanInfo>::iterator m_cachedKey;
    std::map<std::string, BanInfo>::iterator m_cachedAddress;

    void clearBanList();
    void endOfRound();
};

extern std::string banFileName[];

void BanList::endOfRound()
{
    clearBanList();
    io::mainConsole->execute(banFileName[0], "", "", "", "", "", "", "", "",
                             io::Console::ignoredString_);
}

} }
