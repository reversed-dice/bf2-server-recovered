// FUNCTION: BF2 0x435750
namespace dice { namespace hfe {
extern void func_439a80(void*);
extern void func_4085b8(void*);
class VoipPlayerMuteEvent {
public:
    void* vtable;
    void destroy();
};
void VoipPlayerMuteEvent::destroy() {
    vtable = (void*)0xb2e450;
    func_439a80(this);
    func_4085b8(this);
}
} }
// REVERSED_FUNCTION: dice_hfe_VoipPlayerMuteEvent_dtor_VoipPlayerMuteEvent (0x435750)
