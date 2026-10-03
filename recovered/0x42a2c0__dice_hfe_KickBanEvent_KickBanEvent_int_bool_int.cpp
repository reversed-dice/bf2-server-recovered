// FUNCTION: BF2 0x42a2c0
// BF2_FLAGS: -fno-strict-aliasing
extern "C" {
    extern long dice_hfe_gameLogic;
    void dice_hfe_GameEvent_GameEvent();
    void dice_hfe_KickBanEvent_executeClient(void*);
}
void ctor_42a1d0(long* p, unsigned a, unsigned char b, unsigned c) {
    dice_hfe_GameEvent_GameEvent();
    *p = 0x00b2d110;
    *((unsigned*)(p + 2)) = a;
    *((unsigned char*)p + 0x14) = b;
    *((unsigned*)(p + 3)) = c;
    long gl = dice_hfe_gameLogic;
    typedef unsigned char (*Fn)(long);
    Fn f = (Fn)(*(long**)gl)[0x278/8];
    unsigned char r = f(gl);
    if (r != 0) {
        dice_hfe_KickBanEvent_executeClient(p);
    }
}
