// FUNCTION: BF2 0x4cf180
namespace dice { namespace hfe {

class Vote {
public:
    char _pad[0x80];
};

namespace world {
extern void* playerManager;
}

class IClient {
public:
    virtual void v00();
    virtual void v08();
    virtual void v10();
    virtual void v18();
    virtual void v20();
    virtual void v28();
    virtual double v30();
};

extern IClient* g_system;

class ServerVoteManager {
public:
    Vote m_0;
    bool m_80;
    char _pad81[0x3];
    int m_84;
    double m_88;
    char _pad90[0x80];
    Vote m_110;
    Vote m_190;
    char _pad210[0x80];
    Vote m_290;
    Vote m_310;
    void updateVote(Vote& vote, float dt);
    void changeMap(int mapId);
    void update(float delta);
};

void ServerVoteManager::update(float delta)
{
    if (dice::hfe::world::playerManager == 0)
        return;
    if (m_80 != 0 && g_system->v30() - m_88 > 0.0) {
        changeMap(m_84);
        m_80 = 0;
        return;
    }
    updateVote(m_110, delta);
    updateVote(m_190, delta);
    updateVote(m_290, delta);
    updateVote(m_310, delta);
    updateVote(m_0, delta);
}

}}
