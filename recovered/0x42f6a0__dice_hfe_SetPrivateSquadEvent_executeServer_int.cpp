// FUNCTION: BF2 0x42f6a0
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
    virtual void v7();
    virtual void setSquadPrivate(unsigned char team, unsigned char squad, bool isPrivate, int unused);
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual unsigned int getSquadLeader(unsigned char team, unsigned char squad);
};
extern ISquadManager* squadManager;

class SetPrivateSquadEvent {
public:
    virtual ~SetPrivateSquadEvent();
    bool executeServer(int client);
    char _pad[0x8];
    unsigned char m_team;
    unsigned char m_squad;
    bool m_private;
};

bool SetPrivateSquadEvent::executeServer(int client)
{
    if (squadManager && squadManager->getSquadLeader(m_team, m_squad) == (unsigned char)client) {
        squadManager->setSquadPrivate(m_team, m_squad, m_private, 0);
        return true;
    }
    return true;
}

} }
