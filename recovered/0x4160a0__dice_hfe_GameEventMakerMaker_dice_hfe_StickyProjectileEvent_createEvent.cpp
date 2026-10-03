// FUNCTION: BF2 0x4160a0
namespace dice { namespace hfe {

extern void* func_407508(unsigned long);
extern void func_439b10(void*);

class GameEventMakerMaker {
public:
    static void* createEvent();
};

void* GameEventMakerMaker::createEvent() {
    void* e = func_407508(0x58);
    func_439b10(e);
    char* base = (char*)e + 0x10;
    *(void**)e = (void*)0xb2e210;
    unsigned int* p = (unsigned int*)base;
    for (unsigned long i = 4; i != 0; --i) {
        p[0] = 0; p[1] = 0; p[2] = 0; p[3] = 0;
        p += 4;
    }
    *(float*)(base + 0x3c) = 1.0f;
    *(float*)(base + 0x28) = 1.0f;
    *(float*)(base + 0x14) = 1.0f;
    *(float*)(base + 0x0) = 1.0f;
    return e;
}

} }
// REVERSED_FUNCTION: dice_hfe_GameEventMakerMaker_dice_hfe_StickyProjectileEvent_createEvent (0x4160a0)
