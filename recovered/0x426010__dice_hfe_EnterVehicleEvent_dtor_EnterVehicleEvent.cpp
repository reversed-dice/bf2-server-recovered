// FUNCTION: BF2 0x426010
namespace dice { namespace hfe {
extern void func_439a80(void*);
extern void func_4085b8(void*);
class EnterVehicleEvent {
public:
    void* vtable;
    void destroy();
};
void EnterVehicleEvent::destroy() {
    vtable = (void*)0xb2c650;
    func_439a80(this);
    func_4085b8(this);
}
} }
// REVERSED_FUNCTION: dice_hfe_EnterVehicleEvent_dtor_EnterVehicleEvent (0x426010)
