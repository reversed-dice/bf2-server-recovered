// FUNCTION: BF2 0x416040
namespace dice { namespace hfe { namespace world {
extern void* func_00407508(unsigned long);
extern void func_00439b10(void*);
void* create_0x416040() {
    void* p = func_00407508(0x68);
    func_00439b10(p);
    *(void**)p = (void*)0xb2b5f0;
    return p;
}
} } }
// REVERSED_FUNCTION: dice_hfe_GameEventMakerMaker_dice_hfe_ChallengeResponseEvent_createEvent (0x416040)
