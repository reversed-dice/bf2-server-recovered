// FUNCTION: BF2 0x4359b0
namespace dice { namespace hfe {
extern void func_439a80(void*);
extern void func_4085b8(void*);
class VoipSessionEvent {
public:
    void* vtable;
    void destroy();
};
void VoipSessionEvent::destroy() {
    vtable = (void*)0xb2e510;
    func_439a80(this);
    func_4085b8(this);
}
} }
// REVERSED_FUNCTION: dice_hfe_VoipSessionEvent_dtor_VoipSessionEvent (0x4359b0)
