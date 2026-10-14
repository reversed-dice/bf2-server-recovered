// BF2_FLAGS: -fno-strict-aliasing -fno-tree-ter
// FUNCTION: BF2 0x475740
namespace dice { namespace hfe {

extern void* game;

class GameEvent { public: virtual ~GameEvent(); };
class PythonCommandEvent : public GameEvent {
public:
    PythonCommandEvent(int eventId, int playerId, bool local, bool reliable, int a, int b, int c, int d);
    char _pad[0x28];
};

namespace world {
class IPlayer;
class IPlayerManager {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual IPlayer* getPlayerFromId(int id);
    virtual void v9(); virtual void v10(); virtual void v11();
    virtual IPlayer* getLocalHumanPlayer();
};
extern IPlayerManager* playerManager;
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
    virtual int getId() const;

};
}

class GameLogic {
public:
    bool remoteCommand(int a1, int a2, int a3, int a4, int a5);
};

typedef void (*SendFn)(void*, int, GameEvent*);

bool GameLogic::remoteCommand(int a1, int a2, int a3, int a4, int a5) {
    int playerId = 0xff;
    world::IPlayer* p = world::playerManager->getLocalHumanPlayer();
    if (p) playerId = p->getId();
    SendFn send = (SendFn)(*(void***)game)[0x24];
    PythonCommandEvent* e = new PythonCommandEvent(a1, playerId, true, false, a2, a3, a4, a5);
    send(game, -1, e);
    return true;
}

} }
