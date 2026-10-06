// FUNCTION: BF2 0x42d470
namespace dice { namespace hfe {

class GameEvent {
public:
    GameEvent() : m_next(0) {}
    virtual ~GameEvent();
    char _pad[0x18];
    GameEvent* m_next;
};

class RadioMessage : public GameEvent {
public:
    RadioMessage(unsigned char sender, unsigned char squad, unsigned char team, unsigned char kind, unsigned char target, int a, int b)
        : m_sender(sender), m_team(team), m_squad(squad), m_kind(kind), m_target(target), m_a(a), m_b(b) {}
    unsigned char m_sender;
    unsigned char m_team;
    unsigned char m_squad;
    unsigned char m_kind;
    unsigned char m_target;
    int m_a;
    int m_b;
};

class RadioMessageEvent {
public:
    virtual ~RadioMessageEvent();
    bool executeServer(int client);
    bool executeClient();
    char _pad[0x8];
    unsigned char m_team;
    unsigned char m_squad;
    unsigned char m_kind;
    unsigned char m_target;
    int m_a;
    int m_b;
};
class IBase {
public:
    virtual void addRef();
    virtual void getRef();
    virtual void release();
    virtual IBase* queryInterface(unsigned int iid) const;
};
class IGameServer : public IBase {
public:
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
    virtual void* getConnection(int client);
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
    virtual void handleRadioMessage(RadioMessage* m);
};
class IGameClient : public IBase {
public:
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void* getConnection();
};
class IEventManager {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void postEvent(int type, GameEvent* e, float delay);
};
class RadioMessage;
extern IBase* game;
extern IEventManager* eventManager;
extern const unsigned int IID_IGameServer;
extern const unsigned int IID_IGameClient;


bool RadioMessageEvent::executeServer(int client)
{
    IGameServer* gs = static_cast<IGameServer*>(game->queryInterface(IID_IGameServer));
    if (!gs)
        return false;
    if (gs->getConnection(client))
        gs->handleRadioMessage(new RadioMessage(client, m_squad, m_team, m_kind, m_target, m_a, m_b));
    return true;
}

bool RadioMessageEvent::executeClient()
{
    IGameClient* gc = static_cast<IGameClient*>(game->queryInterface(IID_IGameClient));
    if (!gc)
        return false;
    if (gc->getConnection())
        eventManager->postEvent(6, new RadioMessage(0xff, m_squad, m_team, m_kind, m_target, m_a, m_b), 0.0f);
    return true;
}

} }
