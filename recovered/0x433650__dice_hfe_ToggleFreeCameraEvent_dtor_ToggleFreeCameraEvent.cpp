// FUNCTION: BF2 0x433650
namespace dice { namespace hfe {
extern void func_439a80(void*);
extern void func_4085b8(void*);
class ToggleFreeCameraEvent {
public:
    void* vtable;
    void destroy();
};
void ToggleFreeCameraEvent::destroy() {
    vtable = (void*)0xb2dfd0;
    func_439a80(this);
    func_4085b8(this);
}
} }
// REVERSED_FUNCTION: dice_hfe_ToggleFreeCameraEvent_dtor_ToggleFreeCameraEvent (0x433650)
