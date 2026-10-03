// FUNCTION: BF2 0x426680
namespace dice { namespace hfe {

class IPlayer {
public:
#define V(n) virtual void _v##n();
    V(0) V(1) V(2) V(3) V(4) V(5) V(6) V(7) V(8) V(9) V(10) V(11) V(12) V(13) V(14) V(15)
    V(16) V(17) V(18) V(19) V(20) V(21) V(22) V(23) V(24) V(25) V(26) V(27) V(28) V(29)
    V(30) V(31) V(32) V(33) V(34) V(35) V(36) V(37) V(38) V(39) V(40) V(41) V(42) V(43)
    V(44) V(45) V(46) V(47) V(48) V(49) V(50) V(51) V(52) V(53) V(54) V(55) V(56) V(57)
#undef V
    virtual bool canSwitchTeam();
};
class IPlayerManager {
public:
    virtual void _v00(); virtual void _v08(); virtual void _v10(); virtual void _v18();
    virtual void _v20(); virtual void _v28(); virtual void _v30(); virtual void _v38();
    virtual IPlayer* getPlayerFromId(int id);
};
extern IPlayerManager* g_playerManager;

class FixPlayerTeamEvent {
public:
    bool executeServer(int);
    char _pad0[0x10];
    bool m_result;
    unsigned char _pad11;
    unsigned char m_player;
    unsigned char m_target;
};

bool FixPlayerTeamEvent::executeServer(int)
{
    IPlayer* p = g_playerManager->getPlayerFromId(m_player);
    IPlayer* t = g_playerManager->getPlayerFromId(m_target);
    if (!p || !t)
        return false;
    m_result = p->canSwitchTeam();
    return true;
}

} }
