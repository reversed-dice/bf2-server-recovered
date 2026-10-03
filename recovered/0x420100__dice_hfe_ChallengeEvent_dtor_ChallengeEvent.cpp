// FUNCTION: BF2 0x420100
namespace dice { namespace hfe {
extern void func_439a80(void*);
extern void func_4085b8(void*);
class ChallengeEvent {
public:
    void* vtable;
    void destroy();
};
void ChallengeEvent::destroy() {
    vtable = (void*)0xb2b570;
    func_439a80(this);
    func_4085b8(this);
}
} }
// REVERSED_FUNCTION: dice_hfe_ChallengeEvent_dtor_ChallengeEvent (0x420100)
