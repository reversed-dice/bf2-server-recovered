// FUNCTION: BF2 0x64dd80
#include <string>

namespace dice { namespace hfe {

std::string formatString(char const* fmt, ...);

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
    char get(std::string const& url, bool a);
private:
    char _pad[0x18];
};

class ILeaderBoard {
public:
    virtual void vf0();
    virtual void vf1();
    virtual void vf2();
    virtual void vf3();
    virtual void vf4();
};

class LeaderBoard : public ILeaderBoard, public HTTPRequest {
public:
    virtual bool getLeaderBoardPlayer(int id, std::string const& param, bool a);
private:
    int m_x28;            // +0x28
    char _pad0[0x4];
    KeyParser m_keys;     // +0x30
    int m_a;              // +0x48
    int m_b;              // +0x4c
};

bool LeaderBoard::getLeaderBoardPlayer(int id, std::string const& param, bool a)
{
    if (isUpdating())
        cancel();
    m_keys.clear();
    m_a = 0;
    m_b = 0;
    std::string url(getGameSpyUrl() + "getleaderboard.aspx?");
    url.append(formatString("pid=%d&", id));
    url.append(param);
    bool ok = get(url, a);
    return ok;
}

} }
