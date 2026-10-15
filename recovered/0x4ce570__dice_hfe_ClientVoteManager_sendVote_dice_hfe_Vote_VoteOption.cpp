// FUNCTION: BF2 0x4ce570
// BF2_FLAGS: -fno-strict-aliasing
namespace dice { namespace hfe {

extern "C" {
    void* _Znwm(unsigned long size);
    extern void* dice_hfe_world_playerManager;
    extern void* dice_hfe_gameLogic;
    extern void* dice_hfe_game;
    extern void* dice_hfe_eventManager;
    char fn_4cd7f0(void* self);
    void dice_hfe_GameEvent_GameEvent(void* obj);
    void dice_hfe_VoteEvent_setVoteItem_int(void* obj, int item);
}

class ClientVoteManager {
public:
    bool m_canVote;
    bool m_voting;
    int m_type;
    int m_team;
    bool participatesInVoting() { return fn_4cd7f0(this) != 0; }
    int sendVote(int option);
};

struct VoteEvent {
    void* vtable;
    char pad[0x28];
};

class Game {
public:
    virtual void v00();
    virtual void v01();
    virtual void v02();
    virtual void v03();
    virtual void v04();
    virtual void v05();
    virtual void v06();
    virtual void v07();
    virtual void v08();
    virtual void v09();
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
    virtual void sendVote(int team, void* evt);
};

static inline void* getLocalPlayer()
{
    return ((void* (*)(void*))(*(void***)dice_hfe_world_playerManager)[0x60 / 8])(dice_hfe_world_playerManager);
}

static inline int getTeam(void* player)
{
    return ((int (*)(void*))(*(void***)player)[0xa8 / 8])(player);
}

int ClientVoteManager::sendVote(int option)
{
    if (!participatesInVoting())
        return 0;
    if (dice_hfe_world_playerManager != 0) {
        if ((unsigned int)(m_type - 2) <= 1) {
            int teamId = m_team;
            if (teamId == getTeam(getLocalPlayer()))
                return 0;
        }
        VoteEvent* evt = (VoteEvent*)_Znwm(0x28);
        int type = m_type;
        dice_hfe_GameEvent_GameEvent(evt);
        evt->vtable = (void*)0xb2ed10;
        *(int*)((char*)evt + 0x18) = 4;
        *(int*)((char*)evt + 0x1c) = type;
        *(char*)((char*)evt + 0x25) = (char)0xfe;
        *(int*)((char*)evt + 0x10) = option;
        dice_hfe_VoteEvent_setVoteItem_int(evt, m_team);
        if (!((bool (*)(void*))(*(void***)dice_hfe_gameLogic)[0x278 / 8])(dice_hfe_gameLogic)) {
            ((Game*)dice_hfe_game)->sendVote(getTeam(getLocalPlayer()), evt);
        } else {
            ((void (*)(void*, int, int, VoteEvent*))(*(void***)dice_hfe_eventManager)[0x38 / 8])(dice_hfe_eventManager, 0, 0xf, evt);
        }
        m_voting = 1;
        return 1;
    }
    return 0;
}

} }
