// FUNCTION: BF2 0x678770
#include <string>

namespace dice { namespace hfe {

int compareIgnoreCase(const std::string& a, const std::string& b);
struct ServerSettings { char pad[0xd8]; int m_conn; };
extern ServerSettings* serverSettings;
int InitStatsConnection(int);
int SendGameSnapShotA(void* game, char const* data, int flag);

class StatsManager {
public:
    virtual void addRef();
    virtual void getRef();
    virtual void release();
    virtual void queryInterface(unsigned int) const;
    virtual void connect();
    virtual void disconnect();
    virtual void newGame();
    virtual void endGame();
    virtual bool isConnected();
    virtual void getChallenge();
    virtual void* getGame() const;
    virtual void think();
    virtual bool sendSnapshot(const std::string& s);
    virtual bool sendFinal(const std::string& s);
};

typedef std::string const& (*GetModNameFn)(void*);

bool StatsManager::sendSnapshot(const std::string& s)
{
    void* g = *(void**)0x10c5420;
    std::string mod = ((GetModNameFn)(*(void***)g)[61])(g);
    if (compareIgnoreCase(mod, std::string("gpm_coop")) == 0) {
        if (!isConnected() && InitStatsConnection(serverSettings->m_conn) != 0)
            return false;
        if (SendGameSnapShotA(getGame(), s.c_str(), 0) == 0)
            return true;
    }
    return false;
}

} }
