// FUNCTION: BF2 0x41ea10
namespace dice { namespace hfe {
extern void func_439a80(void*);
extern void func_4085b8(void*);
class AmbientEffectAreaEvent {
public:
    void* vtable;
    void destroy();
};
void AmbientEffectAreaEvent::destroy() {
    vtable = (void*)0xb2b190;
    func_439a80(this);
    func_4085b8(this);
}
} }
// REVERSED_FUNCTION: dice_hfe_AmbientEffectAreaEvent_dtor_AmbientEffectAreaEvent (0x41ea10)
