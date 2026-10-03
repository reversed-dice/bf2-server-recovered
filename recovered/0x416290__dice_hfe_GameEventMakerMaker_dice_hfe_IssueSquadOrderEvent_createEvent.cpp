// FUNCTION: BF2 0x416290
namespace dice { namespace hfe {

extern void* func_407508(unsigned long);
extern void func_439b10(void*);

class GameEventMakerMaker {
public:
    static void* createEvent();
};

void* GameEventMakerMaker::createEvent() {
    void* e = func_407508(0x40);
    func_439b10(e);
    *(void**)e = (void*)0xb2cf90;
    unsigned int* p = (unsigned int*)((char*)e + 0x14);
    for (unsigned long i = 3; i != 0; --i) {
        p[0] = 0; p[1] = 0; p[2] = 0;
        p += 3;
    }
    return e;
}

} }
// REVERSED_FUNCTION: dice_hfe_GameEventMakerMaker_dice_hfe_IssueSquadOrderEvent_createEvent (0x416290)
