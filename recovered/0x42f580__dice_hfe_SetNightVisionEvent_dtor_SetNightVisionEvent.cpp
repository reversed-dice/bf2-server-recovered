// FUNCTION: BF2 0x42f580
namespace dice { namespace hfe {
extern void func_439a80(void*);
extern void func_4085b8(void*);
class SetNightVisionEvent {
public:
    void* vtable;
    void destroy();
};
void SetNightVisionEvent::destroy() {
    vtable = (void*)0xb2d910;
    func_439a80(this);
    func_4085b8(this);
}
} }
// REVERSED_FUNCTION: dice_hfe_SetNightVisionEvent_dtor_SetNightVisionEvent (0x42f580)
