// FUNCTION: BF2 0x420d20
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
namespace dice { namespace hfe {

class ISquadManager {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void setSquadName(unsigned char team, unsigned char squad, unsigned char player, const std::string& name, bool remote);
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual int getSquadLeader(unsigned char team, unsigned char squad);
};
extern ISquadManager* squadManager;

class ChangeSquadNameEvent {
public:
    virtual ~ChangeSquadNameEvent();
    bool executeServer(int client);
    char _pad[0x8];
    char m_name[0x21];
    unsigned char m_team;
    unsigned char m_squad;
    unsigned char m_player;
};

bool ChangeSquadNameEvent::executeServer(int client)
{
    if (squadManager) {
        int leader = squadManager->getSquadLeader(m_team, m_squad);
        if (leader == -1 || leader == client)
            squadManager->setSquadName(m_team, m_squad, m_player, std::string(m_name), false);
    }
    return true;
}

} }
