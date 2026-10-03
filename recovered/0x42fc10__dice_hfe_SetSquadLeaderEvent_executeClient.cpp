// FUNCTION: BF2 0x42fc10
namespace dice { namespace hfe {

class ISquadManager {
public:
    virtual void _v00(); virtual void _v08(); virtual void _v10(); virtual void _v18();
    virtual void _v20(); virtual void _v28(); virtual void _v30(); virtual void _v38();
    virtual void _v40(); virtual void _v48(); virtual void _v50(); virtual void _v58();
    virtual void _v60(); virtual void _v68();
    virtual void setSquadLeader(int team, int squad, int player, bool notify);
};

extern ISquadManager* g_squadManager;

class SetSquadLeaderEvent {
public:
    bool executeClient();
    char _pad0[0x10];
    unsigned char m_team;
    unsigned char m_player;
    unsigned char m_squad;
};

bool SetSquadLeaderEvent::executeClient()
{
    if (g_squadManager)
        g_squadManager->setSquadLeader(m_team, m_squad, m_player, true);
    return true;
}

} }
