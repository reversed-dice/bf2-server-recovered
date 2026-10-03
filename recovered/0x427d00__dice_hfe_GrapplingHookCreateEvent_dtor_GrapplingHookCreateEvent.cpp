// FUNCTION: BF2 0x427d00
namespace dice { namespace hfe {
extern void func_439a80(void*);
extern void func_4085b8(void*);
class GrapplingHookCreateEvent {
public:
    void* vtable;
    void destroy();
};
void GrapplingHookCreateEvent::destroy() {
    vtable = (void*)0xb2cad0;
    func_439a80(this);
    func_4085b8(this);
}
} }
// REVERSED_FUNCTION: dice_hfe_GrapplingHookCreateEvent_dtor_GrapplingHookCreateEvent (0x427d00)
