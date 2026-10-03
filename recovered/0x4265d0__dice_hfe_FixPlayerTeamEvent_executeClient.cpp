// FUNCTION: BF2 0x4265d0
namespace dice { namespace hfe {

#define V(n) virtual void _v##n();
#define V10(a) V(a##0) V(a##1) V(a##2) V(a##3) V(a##4) V(a##5) V(a##6) V(a##7) V(a##8) V(a##9)
class IPlayer {
public:
    V10(0) V10(1) V10(2) V10(3) V10(4) V(50) V(51) V(52) V(53) V(54) V(55) V(56)
    virtual void setTeam(int team, bool notify);
};
class IPlayerManager {
public:
    V(0) V(1) V(2) V(3) V(4) V(5) V(6) V(7)
    virtual IPlayer* getPlayerFromId(int id);
    V(9) V(10) V(11)
    virtual IPlayer* getLocalPlayer();
};
#undef V10
#undef V
extern IPlayerManager* g_playerManager;

class FixPlayerTeamEvent {
public:
    bool executeClient();
    char _pad0[0x10];
    unsigned char m_team;
    unsigned char m_oldTeam;
    unsigned char m_player;
    unsigned char m_target;
};

bool FixPlayerTeamEvent::executeClient()
{
    IPlayer* p = g_playerManager->getPlayerFromId(m_player);
    IPlayer* t = g_playerManager->getPlayerFromId(m_target);
    if (!p || !t)
        return false;
    if (t != g_playerManager->getLocalPlayer())
        return false;
    if (m_oldTeam != m_team)
        p->setTeam(m_team, true);
    return true;
}

} }
