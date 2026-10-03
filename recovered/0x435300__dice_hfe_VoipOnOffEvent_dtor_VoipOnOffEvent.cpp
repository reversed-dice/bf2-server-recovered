// FUNCTION: BF2 0x435300
namespace dice { namespace hfe {
extern void func_439a80(void*);
extern void func_4085b8(void*);
class VoipOnOffEvent {
public:
    void* vtable;
    void destroy();
};
void VoipOnOffEvent::destroy() {
    vtable = (void*)0xb2e390;
    func_439a80(this);
    func_4085b8(this);
}
} }
// REVERSED_FUNCTION: dice_hfe_VoipOnOffEvent_dtor_VoipOnOffEvent (0x435300)
