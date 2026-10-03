// FUNCTION: BF2 0x4be900
namespace dice { namespace hfe {
extern void func_439a80(void*);
extern void func_4085b8(void*);
class AmbientEffectAreaEvent {
public:
    void* vtable;
    void destroy();
};
void AmbientEffectAreaEvent::destroy() {
    vtable = (void*)0xb38170;
    func_439a80(this);
    func_4085b8(this);
}
} }
// REVERSED_FUNCTION: dice_hfe_ClientSquadManager_dtor_ClientSquadManager (0x4be900)
