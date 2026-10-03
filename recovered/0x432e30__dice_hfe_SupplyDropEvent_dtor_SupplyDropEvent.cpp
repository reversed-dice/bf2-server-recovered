// FUNCTION: BF2 0x432e30
namespace dice { namespace hfe {
extern void func_439a80(void*);
extern void func_4085b8(void*);
class SupplyDropEvent {
public:
    void* vtable;
    void destroy();
};
void SupplyDropEvent::destroy() {
    vtable = (void*)0xb2de50;
    func_439a80(this);
    func_4085b8(this);
}
} }
// REVERSED_FUNCTION: dice_hfe_SupplyDropEvent_dtor_SupplyDropEvent (0x432e30)
