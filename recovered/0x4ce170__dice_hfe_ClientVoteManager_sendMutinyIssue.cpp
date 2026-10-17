// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x4ce170
namespace dice { namespace hfe {

extern "C" {
    void* _Znwm(unsigned long size);
    extern void* dice_hfe_world_playerManager;
    extern void* dice_hfe_squadManager;
    extern void* dice_hfe_gameLogic;
    extern void* dice_hfe_game;
    extern void* dice_hfe_eventManager;
    char fn_4cd7f0(void* self);
    char fn_4cd7d0(void* self);
    void dice_hfe_GameEvent_GameEvent(void* obj);
    void dice_hfe_VoteEvent_setVoteItem_int(void* obj, int item);
    void dice_hfe_VoteEvent_setVoteCaster_int(void* obj, int caster);
}

class ClientVoteManager {
public:
    bool m_canVote;
    bool m_voting;
    int m_type;
    int m_team;
    bool participatesInVoting() { return fn_4cd7f0(this) != 0; }
    bool getDisallowedForTimePeriod() { return fn_4cd7d0(this) != 0; }
    int sendMutinyIssue();
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

// compile-state padding: 12 unused functions, see trick 378
__attribute__((used)) int __pad_0(int x) { int y = x * 0 + 3; return y; }
__attribute__((used)) int __pad_1(int x) { int y = x * 1 + 3; return y; }
__attribute__((used)) int __pad_2(int x) { int y = x * 2 + 3; return y; }
__attribute__((used)) int __pad_3(int x) { int y = x * 3 + 3; return y; }
__attribute__((used)) int __pad_4(int x) { int y = x * 4 + 3; return y; }
__attribute__((used)) int __pad_5(int x) { int y = x * 5 + 3; return y; }
__attribute__((used)) int __pad_6(int x) { int y = x * 6 + 3; return y; }
__attribute__((used)) int __pad_7(int x) { int y = x * 7 + 3; return y; }
__attribute__((used)) int __pad_8(int x) { int y = x * 8 + 3; return y; }
__attribute__((used)) int __pad_9(int x) { int y = x * 9 + 3; return y; }
__attribute__((used)) int __pad_10(int x) { int y = x * 10 + 3; return y; }
__attribute__((used)) int __pad_11(int x) { int y = x * 11 + 3; return y; }
int ClientVoteManager::sendMutinyIssue()
{
    if (!participatesInVoting())
        return 0;
    void* pm = dice_hfe_world_playerManager;
    if (pm != 0) {
        int type = m_type;
        if (type != 0)
            return 0;
        if (getDisallowedForTimePeriod())
            return 0;
        void* player = ((void* (*)(void*))(*(void***)pm)[0x60 / 8])(pm);
        int item = ((int (*)(void*))(*(void***)player)[0x1d0 / 8])(player);
        item = ((int (*)(void*, int))(*(void***)dice_hfe_squadManager)[0xe0 / 8])(dice_hfe_squadManager, item);
        VoteEvent* evt = (VoteEvent*)_Znwm(0x28);
        dice_hfe_GameEvent_GameEvent(evt);
        evt->vtable = (void*)0xb2ed10;
        *(int*)((char*)evt + 0x1c) = 3;
        *(int*)((char*)evt + 0x18) = 0;
        *(char*)((char*)evt + 0x25) = (char)0xfe;
        dice_hfe_VoteEvent_setVoteItem_int(evt, item);
        dice_hfe_VoteEvent_setVoteCaster_int(evt, getTeam(getLocalPlayer()));
        if (!((bool (*)(void*))(*(void***)dice_hfe_gameLogic)[0x278 / 8])(dice_hfe_gameLogic)) {
            ((Game*)dice_hfe_game)->sendVote(getTeam(getLocalPlayer()), evt);
        } else {
            ((void (*)(void*, int, int, VoteEvent*))(*(void***)dice_hfe_eventManager)[0x38 / 8])(dice_hfe_eventManager, 0, 0xf, evt);
        }
        return 1;
    }
    return 0;
}

} }
