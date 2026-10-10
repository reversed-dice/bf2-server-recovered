// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x4beea0
namespace dice { namespace hfe {

class GameEvent {
public:
    GameEvent();
    void* m_pad[2];
};

class SingletonServer {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35();
    virtual void sendEvent(int, GameEvent*);
};

extern SingletonServer* game;

class ClientSquadManager {
public:
    bool addToSquad(int, int, int);
};

class AddToSquadEvent : public GameEvent {
public:
    unsigned char m_a;
    unsigned char m_b;
    unsigned char m_c;

    AddToSquadEvent(int a, int b, int c) {
        *reinterpret_cast<void**>(this) = reinterpret_cast<void*>(0xb2d050);
        m_a = a;
        m_c = b;
        m_b = c;
    }
};

bool ClientSquadManager::addToSquad(int a, int b, int c) {
    if (game)
        game->sendEvent(-1, new AddToSquadEvent(a, b, c));
    return true;
}

} }
// REVERSED_FUNCTION: dice_hfe_ClientSquadManager_addToSquad_int_int_int (0x4beea0)
