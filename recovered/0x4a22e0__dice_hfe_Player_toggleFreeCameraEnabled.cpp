// FUNCTION: BF2 0x4a22e0
struct Player {
    void** vtable;
    char _pad[0xa0];
    int toggleFlag;  // offset 0xa8
};

typedef void (*ToggleFunc)(void*, int);

extern "C" void dice_hfe_Player_toggleFreeCameraEnabled(void* self) {
    Player* p = (Player*)self;
    unsigned char val = (unsigned char)(1 ^ p->toggleFlag);
    ToggleFunc fn = (ToggleFunc)p->vtable[0x158 / 8];
    fn(self, (int)val);
}
