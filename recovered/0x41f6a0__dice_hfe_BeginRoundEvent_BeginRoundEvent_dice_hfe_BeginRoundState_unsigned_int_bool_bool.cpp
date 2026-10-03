// FUNCTION: BF2 0x41f6a0
// BF2_FLAGS: -fno-strict-aliasing
namespace dice { namespace hfe {

extern "C" {
    extern long dice_hfe_world_playerManager;
    void dice_hfe_GameEvent_GameEvent();
    void dice_hfe_BeginRoundEvent_executeClient(void*);
}

void ctor_41f6a0(long* p, unsigned state, unsigned val, long obj, char flag) {
    dice_hfe_GameEvent_GameEvent();
    *p = 0x00b2b3f0;
    *((unsigned*)(p + 2)) = state;
    *((unsigned*)((char*)p + 0x14)) = val;
    if (flag != 0) {
        long mgr = dice_hfe_world_playerManager;
        typedef long (*Fn)(long);
        Fn f = (Fn)(*(long**)mgr)[0x60/8];
        long r = f(mgr);
        if (r != 0) {
            dice_hfe_BeginRoundEvent_executeClient(p);
        }
    }
}

} }
