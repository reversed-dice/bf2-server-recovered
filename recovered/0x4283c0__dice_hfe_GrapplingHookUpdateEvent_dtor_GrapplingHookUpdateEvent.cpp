// FUNCTION: BF2 0x4283c0
namespace dice { namespace hfe {
extern void func_439a80(void*);
extern void func_4085b8(void*);
class GrapplingHookUpdateEvent {
public:
    void* vtable;
    void destroy();
};
void GrapplingHookUpdateEvent::destroy() {
    vtable = (void*)0xb2cb90;
    func_439a80(this);
    func_4085b8(this);
}
} }
// REVERSED_FUNCTION: dice_hfe_GrapplingHookUpdateEvent_dtor_GrapplingHookUpdateEvent (0x4283c0)
