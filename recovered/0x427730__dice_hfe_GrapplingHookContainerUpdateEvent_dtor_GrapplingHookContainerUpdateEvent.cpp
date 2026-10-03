// FUNCTION: BF2 0x427730
namespace dice { namespace hfe {
extern void func_439a80(void*);
extern void func_4085b8(void*);
class GrapplingHookContainerUpdateEvent {
public:
    void* vtable;
    void destroy();
};
void GrapplingHookContainerUpdateEvent::destroy() {
    vtable = (void*)0xb2ca10;
    func_439a80(this);
    func_4085b8(this);
}
} }
// REVERSED_FUNCTION: dice_hfe_GrapplingHookContainerUpdateEvent_dtor_GrapplingHookContainerUpdateEvent (0x427730)
