// FUNCTION: BF2 0x428b40
namespace dice { namespace hfe {
extern void func_439a80(void*);
extern void func_4085b8(void*);
class HandlePickupEvent {
public:
    void* vtable;
    void destroy();
};
void HandlePickupEvent::destroy() {
    vtable = (void*)0xb2cd10;
    func_439a80(this);
    func_4085b8(this);
}
} }
// REVERSED_FUNCTION: dice_hfe_HandlePickupEvent_dtor_HandlePickupEvent (0x428b40)
