// FUNCTION: BF2 0x420df0
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
};
extern ISquadManager* squadManager;

class ChangeSquadNameEvent {
public:
    virtual ~ChangeSquadNameEvent();
    bool executeClient();
    char _pad[0x8];
    char m_name[0x21];
    unsigned char m_team;
    unsigned char m_squad;
    unsigned char m_player;
};

bool ChangeSquadNameEvent::executeClient()
{
    if (squadManager)
        squadManager->setSquadName(m_team, m_squad, m_player, std::string(m_name), true);
    return true;
}

} }
