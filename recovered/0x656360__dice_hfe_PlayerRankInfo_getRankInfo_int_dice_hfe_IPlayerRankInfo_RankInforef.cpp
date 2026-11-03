// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x656360
#include <string>
#include <ctime>

namespace dice { namespace hfe {

std::string formatString(char const* fmt, ...);
extern "C" long __strtol_internal(char const*, char**, int, int);

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

class IPlayerRankInfo {
public:
    struct RankInfo {
        time_t m_time;   // 0x0
        int m_id;        // 0x8
        int m_rank;      // 0xc
        int m_chng;      // 0x10
        int m_decr;      // 0x14
    };
    virtual void vf0();
    virtual void vf1();
    virtual void vf2();
    virtual void vf3();
    virtual bool getRankInfo(int id, RankInfo& out);              // +0x20
    virtual void vf5();                                           // +0x28
    virtual int vf6();                                            // +0x30
    virtual void vf7();                                           // +0x38
    virtual std::string getKey(unsigned int k, std::string const& key);  // +0x40
};

class PlayerRankInfo : public IPlayerRankInfo, public HTTPRequest {
public:
    virtual bool getRankInfo(int id, RankInfo& out);
private:
    int m_x28;          // +0x28
    char _pad0[0x4];
    KeyParser m_keys;   // +0x30
    bool m_flag;        // +0x48
};

bool PlayerRankInfo::getRankInfo(int id, RankInfo& out)
{
    int ok = 0;
    if (id != 0) {
        if (isUpdating())
            cancel();
        m_flag = false;
        m_keys.clear();
        std::string url(getGameSpyUrl() + "getrankinfo.aspx?pid=");
        url.append(formatString("%d", id));
        if (get(url, false) && vf6()) {
            time(&out.m_time);
            out.m_id = id;
            out.m_rank = (int)__strtol_internal(getKey(0, "rank").c_str(), 0, 10, 0);
            out.m_chng = (int)__strtol_internal(getKey(0, "chng").c_str(), 0, 10, 0);
            out.m_decr = (int)__strtol_internal(getKey(0, "decr").c_str(), 0, 10, 0);
            ok = 1;
        }
    }
    return ok;
}

} }
