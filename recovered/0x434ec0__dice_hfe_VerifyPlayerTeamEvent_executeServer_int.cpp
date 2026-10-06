// FUNCTION: BF2 0x434ec0
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
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53();
    virtual void v54();
    virtual void v55();
    virtual void v56();
    virtual void v57();
    virtual unsigned int getTeam();
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
class FixPlayerTeamEvent;
class IGame {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void sendEventToClient(unsigned char client, FixPlayerTeamEvent* e);
};
extern IGame* game;
namespace world {
extern IPlayerManager* playerManager;
}

class FixPlayerTeamEvent {
public:
    FixPlayerTeamEvent(IPlayer* target, IPlayer* player);
    char _pad[0x18];
};

class VerifyPlayerTeamEvent {
public:
    virtual ~VerifyPlayerTeamEvent();
    bool executeServer(int client);
    char _pad[0x8];
    unsigned char m_team;
    char _pad2;
    unsigned char m_playerId;
    unsigned char m_clientId;
};

bool VerifyPlayerTeamEvent::executeServer(int client)
{
    IPlayer* p = world::playerManager->getPlayerFromId(m_playerId);
    IPlayer* c = world::playerManager->getPlayerFromId(m_clientId);
    if (!p || !c)
        return false;
    if (p->getTeam() != m_team)
        game->sendEventToClient(m_clientId, new FixPlayerTeamEvent(c, p));
    return true;
}

} }
