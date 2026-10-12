// FUNCTION: BF2 0x6788c0
namespace dice { namespace hfe {

struct StdString { char* data; };

struct ServerSettings { char pad[0xd8]; int m_conn; };

extern ServerSettings* serverSettings;
int InitStatsConnection(int);
int SendGameSnapShotA(void* game, char const* data, int flag);

class IStatsManager {};

class StatsManager : public IStatsManager {
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
    virtual void sendSnapshot(StdString const&);
    virtual bool sendFinal(StdString const&);
    virtual void authenticatePlayer(void*);
    virtual ~StatsManager();
};

bool StatsManager::sendFinal(StdString const& s)
{
    if (!isConnected()) {
        if (InitStatsConnection(serverSettings->m_conn))
            return false;
    }
    if (SendGameSnapShotA(getGame(), s.data, 1) != 0)
        return false;
    return true;
}

} }
