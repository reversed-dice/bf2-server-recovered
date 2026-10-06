// FUNCTION: BF2 0x420630
#include <string>
namespace dice { namespace hfe {

class IPlayer {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void setName(const std::string& name);
};
class IPlayerManager {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual IPlayer* getPlayerFromId(int id);
};
namespace world {
extern IPlayerManager* playerManager;
}

class ChangePlayerNameEvent {
public:
    virtual ~ChangePlayerNameEvent();
    bool executeClient();
    char _pad[0x8];
    char m_name[0x20];
    unsigned char m_playerId;
};

bool ChangePlayerNameEvent::executeClient()
{
    IPlayer* p = world::playerManager->getPlayerFromId(m_playerId);
    if (!p)
        return false;
    p->setName(std::string(m_name));
    return true;
}

} }
