// FUNCTION: BF2 0x415ef0
namespace dice { namespace hfe { namespace world {
extern void* func_00407508(unsigned long);
extern void func_00439b10(void*);
void* create_0x415ef0() {
    void* p = func_00407508(0x18);
    func_00439b10(p);
    *(void**)p = (void*)0xb2c730;
    return p;
}
} } }
// REVERSED_FUNCTION: dice_hfe_GameEventMakerMaker_dice_hfe_ExitVehicleEvent_createEvent (0x415ef0)
