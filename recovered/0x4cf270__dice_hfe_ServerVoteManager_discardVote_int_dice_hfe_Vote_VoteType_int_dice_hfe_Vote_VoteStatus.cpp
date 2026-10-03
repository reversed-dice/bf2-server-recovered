// FUNCTION: BF2 0x4cf270
// BF2_FLAGS: -fno-strict-aliasing
// ServerVoteManager::discardVote 0x4cf270
namespace dice { namespace hfe {

extern "C" {
    void* _Znwm(unsigned long size);  // operator new
    extern long dice_hfe_game;
}

struct VoteEvent {
    void* vtable;           // 0x00
    char pad_08[0x10];      // 0x08-0x17
    int field_18;           // 0x18
    int field_1c;           // 0x1c
    int field_20;           // 0x20
    char pad_24[4];
};

extern "C" {
    void dice_hfe_GameEvent_GameEvent(void* obj);
    void dice_hfe_VoteEvent_setVoteItem_int(void* obj, int item);
    void dice_hfe_VoteEvent_setVoteCaster_int(void* obj, int caster);
}

void discardVote(long self, int caster, int type, int item, int status) {
    // Allocate VoteEvent
    VoteEvent* evt = (VoteEvent*)_Znwm(0x28);
    
    // Initialize
    dice_hfe_GameEvent_GameEvent(evt);
    evt->field_18 = status;
    evt->field_1c = type;
    evt->vtable = (void*)0xb2ed10;  // VoteEvent vtable
    dice_hfe_VoteEvent_setVoteItem_int(evt, item);
    dice_hfe_VoteEvent_setVoteCaster_int(evt, caster);
    evt->field_20 = 0;
    
    // Tail call: game->vtable[0x120](game, caster, evt)
    long game = dice_hfe_game;
    long* game_vtbl = (long*)(*(long*)game);
    typedef void (*DispatchFn)(long, int, VoteEvent*);
    DispatchFn dispatch = (DispatchFn)(*(long*)((char*)game_vtbl + 0x120));
    dispatch(game, caster, evt);
}

} }
