// FUNCTION: BF2 0x426000
namespace dice { namespace hfe { namespace world {
extern void func_0x00439a80(void*);
void dtor_0x426000(void* p) {
    *(void**)p = (void*)0xb2c670;
    func_0x00439a80(p);
}
} } }
// REVERSED_FUNCTION: dice_hfe_EnterVehicleEvent_dtor_EnterVehicleEvent (0x426000)
