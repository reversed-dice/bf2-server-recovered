// FUNCTION: BF2 0x427100
namespace dice { namespace hfe {
extern void func_439a80(void*);
extern void func_4085b8(void*);
class GrapplingHookContainerDetachEvent {
public:
    void* vtable;
    void destroy();
};
void GrapplingHookContainerDetachEvent::destroy() {
    vtable = (void*)0xb2c950;
    func_439a80(this);
    func_4085b8(this);
}
} }
// REVERSED_FUNCTION: dice_hfe_GrapplingHookContainerDetachEvent_dtor_GrapplingHookContainerDetachEvent (0x427100)
