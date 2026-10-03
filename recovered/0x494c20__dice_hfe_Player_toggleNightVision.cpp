// FUNCTION: BF2 0x494c20
struct Player {
    void** vtable;
    char _pad[0x450];
    unsigned char nightVisionFlag;  // +0x458
};

typedef void (*DispatchFunc)(void*, int, int);

extern "C" void dice_hfe_Player_toggleNightVision(void* self) {
    Player* p = (Player*)self;
    unsigned char val = 1 ^ p->nightVisionFlag;
    p->nightVisionFlag = val;
    DispatchFunc fn = (DispatchFunc)p->vtable[0x5b8 / 8];
    fn(self, (int)val, 0);
}
