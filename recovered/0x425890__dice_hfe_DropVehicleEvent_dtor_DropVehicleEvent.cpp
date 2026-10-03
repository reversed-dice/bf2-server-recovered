// FUNCTION: BF2 0x425890
namespace dice { namespace hfe {
extern void func_439a80(void*);
extern void func_4085b8(void*);
class DropVehicleEvent {
public:
    void* vtable;
    void destroy();
};
void DropVehicleEvent::destroy() {
    vtable = (void*)0xb2c4d0;
    func_439a80(this);
    func_4085b8(this);
}
} }
// REVERSED_FUNCTION: dice_hfe_DropVehicleEvent_dtor_DropVehicleEvent (0x425890)
