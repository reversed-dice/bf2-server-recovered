// FUNCTION: BF2 0x426bc0
namespace dice { namespace hfe {
extern void func_439a80(void*);
extern void func_4085b8(void*);
class GrapplingHookContainerCreateEvent {
public:
    void* vtable;
    void destroy();
};
void GrapplingHookContainerCreateEvent::destroy() {
    vtable = (void*)0xb2c890;
    func_439a80(this);
    func_4085b8(this);
}
} }
// REVERSED_FUNCTION: dice_hfe_GrapplingHookContainerCreateEvent_dtor_GrapplingHookContainerCreateEvent (0x426bc0)
