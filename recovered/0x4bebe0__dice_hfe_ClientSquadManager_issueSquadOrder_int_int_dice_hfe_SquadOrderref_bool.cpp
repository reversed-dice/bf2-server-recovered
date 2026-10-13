// FUNCTION: BF2 0x4bebe0
// BF2_FLAGS: -fno-tree-ter
namespace dice { namespace hfe {

class SquadOrder {
public:
    int m_a;
    int m_b;
    int m_c;
};

enum OrderType {
    ORDER_TYPE_NONE = 0
};

class GameEvent {
public:
    virtual ~GameEvent();
};

class IssueSquadOrderEvent : public GameEvent {
public:
    char _pad[0x38];
    IssueSquadOrderEvent(int team, int squad, SquadOrder* order, OrderType type);
};

class IGame {
public:
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    void handleEvent(GameEvent* e);
};

class SquadManager {
public:
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual void f6();
    virtual void f7();
    virtual void f8();
    virtual void f9();
    virtual void f10();
    virtual void f11();
    virtual void f12();
    virtual void f13();
    virtual void f14();
    virtual void f15();
    virtual void f16();
    virtual void issueSquadOrder(int team, int squad, SquadOrder& order, bool fromServer);
};

class ClientSquadManager : public SquadManager {
public:
    virtual void issueSquadOrder(int team, int squad, SquadOrder& order, bool fromServer);
};

extern IGame* game;

typedef void (*Fn120)(void*, int, void*);

void ClientSquadManager::issueSquadOrder(int team, int squad, SquadOrder& order, bool fromServer)
{
    if (fromServer) {
        SquadManager::issueSquadOrder(team, squad, order, true);
        return;
    }
    if (game != 0) {
        Fn120 fn = *(Fn120*)(*(char**)game + 0x120);
        IssueSquadOrderEvent* e = new IssueSquadOrderEvent(team, squad, &order, ORDER_TYPE_NONE);
        fn(game, -1, e);
    }
}

} }
