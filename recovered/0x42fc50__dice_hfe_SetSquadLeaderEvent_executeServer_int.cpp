// FUNCTION: BF2 0x42fc50
namespace dice { namespace hfe {

class ISquadManager {
public:
    virtual void _v00(); virtual void _v08(); virtual void _v10(); virtual void _v18();
    virtual void _v20(); virtual void _v28(); virtual void _v30(); virtual void _v38();
    virtual void _v40(); virtual void _v48(); virtual void _v50(); virtual void _v58();
    virtual void _v60(); virtual void _v68();
    virtual void setSquadLeader(int team, int squad, int player, bool notify); // slot 0x70
    virtual int getSquadLeader(int team, int squad); // slot 0x78
};

extern ISquadManager* squadManager;

class SetSquadLeaderEvent {
public:
    bool executeServer(int clientId);
    char _pad0[0x10];
    unsigned char m_team;
    unsigned char m_player;
    unsigned char m_squad;
};

bool SetSquadLeaderEvent::executeServer(int clientId)
{
    if (squadManager) {
        int leader = squadManager->getSquadLeader(m_team, m_squad);
        if (leader == -1 || leader == clientId || leader == (unsigned char)clientId) {
            squadManager->setSquadLeader(m_team, m_squad, clientId, false);
        }
    }
    return true;
}

} }
