// FUNCTION: BF2 0x415e90
namespace dice { namespace hfe { namespace world {
extern void* func_00407508(unsigned long);
extern void func_00439b10(void*);
void* create_0x415e90() {
    void* p = func_00407508(0x38);
    func_00439b10(p);
    *(void**)p = (void*)0xb2b710;
    return p;
}
} } }
// REVERSED_FUNCTION: dice_hfe_GameEventMakerMaker_dice_hfe_ChangePlayerNameEvent_createEvent (0x415e90)
