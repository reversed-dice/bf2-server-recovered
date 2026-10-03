// FUNCTION: BF2 0x426260
namespace dice { namespace hfe {
extern void func_439a80(void*);
extern void func_4085b8(void*);
class ExitVehicleEvent {
public:
    void* vtable;
    void destroy();
};
void ExitVehicleEvent::destroy() {
    vtable = (void*)0xb2c710;
    func_439a80(this);
    func_4085b8(this);
}
} }
// REVERSED_FUNCTION: dice_hfe_ExitVehicleEvent_dtor_ExitVehicleEvent (0x426260)
