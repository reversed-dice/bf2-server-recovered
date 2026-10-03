// FUNCTION: BF2 0x415ac0
namespace dice { namespace hfe {

extern void* func_407508(unsigned long);
extern void func_439b10(void*);

class GameEventMakerMaker {
public:
    static void* createEvent();
};

void* GameEventMakerMaker::createEvent() {
    void* e = func_407508(0x18);
    func_439b10(e);
    *(void**)e = (void*)0xb2dcf0;
    return e;
}

} }
// REVERSED_FUNCTION: dice_hfe_GameEventMakerMaker_dice_hfe_RequestEvent_createEvent (0x415ac0)
