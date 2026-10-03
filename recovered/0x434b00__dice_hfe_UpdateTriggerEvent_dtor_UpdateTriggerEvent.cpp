// FUNCTION: BF2 0x434b00
namespace dice { namespace hfe {
extern void func_439a80(void*);
extern void func_4085b8(void*);
class UpdateTriggerEvent {
public:
    void* vtable;
    void destroy();
};
void UpdateTriggerEvent::destroy() {
    vtable = (void*)0xb2e210;
    func_439a80(this);
    func_4085b8(this);
}
} }
// REVERSED_FUNCTION: dice_hfe_UpdateTriggerEvent_dtor_UpdateTriggerEvent (0x434b00)
