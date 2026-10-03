// FUNCTION: BF2 0x42dd10
// BF2_FLAGS: -fno-strict-aliasing
extern "C" {
    extern long dice_hfe_gameLogic;
    extern long dice_hfe_world_playerManager;
    void dice_hfe_GameEvent_GameEvent();
    void dice_hfe_RankEvent_executeClient(void*);
}
void ctor_42dd10(long* p, unsigned a, unsigned b, unsigned c, unsigned d) {
    dice_hfe_GameEvent_GameEvent();
    *p = 0x00b2daf0;
    *((unsigned*)(p + 2)) = a;
    *((unsigned*)((char*)p + 0x14)) = b;
    *((unsigned*)(p + 3)) = c;
    *((unsigned*)((char*)p + 0x1c)) = d;
    long gl = dice_hfe_gameLogic;
    typedef unsigned char (*Fn1)(long);
    Fn1 f1 = (Fn1)(*(long**)gl)[0x278/8];
    unsigned char r = f1(gl);
    if (r != 0) {
        long mgr = dice_hfe_world_playerManager;
        typedef long (*Fn2)(long);
        Fn2 f2 = (Fn2)(*(long**)mgr)[0x60/8];
        long r2 = f2(mgr);
        if (r2 != 0) {
            dice_hfe_RankEvent_executeClient(p);
        }
    }
}
