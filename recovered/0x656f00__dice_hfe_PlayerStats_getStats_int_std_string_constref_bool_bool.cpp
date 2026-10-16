// FUNCTION: BF2 0x656f00
#include <string>

namespace dice { namespace hfe {

std::string formatString(char const* fmt, ...);
extern "C" void __assert_fail(char const*, char const*, unsigned int, char const*) __attribute__((noreturn));

class KeyParser {
public:
    void clear();
private:
    char _pad[0x18];
};

class HTTPRequest {
public:
    virtual void vf0();
    bool isUpdating();
    void cancel();
    std::string getGameSpyUrl() const;
    bool get(std::string const& url, bool a);
private:
    char _pad[0x18];
};

class IPlayerStats {
public:
    virtual void vf0();
    virtual void vf1();
    virtual void vf2();
    virtual void vf3();
};

class PlayerStats : public IPlayerStats, public HTTPRequest {
public:
    virtual bool getStats(int id, std::string const& param, bool a, bool b);
private:
    char _pad0[0x8];      // +0x28
    KeyParser m_keys;     // +0x30
    bool m_flag;          // +0x48
    char _pad1[0x3];
    int m_id;             // +0x4c
};

bool PlayerStats::getStats(int id, std::string const& param, bool a, bool b)
{
    if (id != 0) {
        m_id = id;
        m_flag = b;
        if (isUpdating())
            cancel();
        m_keys.clear();
        std::string url(getGameSpyUrl() + "getplayerinfo.aspx?pid=");
        url.append(formatString("%d", id));
        url.append(param);
        if (!get(url, a))
            __assert_fail("false", "Game/Persistence/PlayerStats.cpp", 99,
                          __PRETTY_FUNCTION__);
        return true;
    }
    return false;
}

} }
