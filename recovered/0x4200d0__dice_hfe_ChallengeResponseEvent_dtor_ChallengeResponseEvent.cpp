// FUNCTION: BF2 0x4200d0
namespace dice { namespace hfe {
extern void func_439a80(void*);
extern void func_4085b8(void*);
class ChallengeResponseEvent {
public:
    void* vtable;
    void destroy();
};
void ChallengeResponseEvent::destroy() {
    vtable = (void*)0xb2b5f0;
    func_439a80(this);
    func_4085b8(this);
}
} }
// REVERSED_FUNCTION: dice_hfe_ChallengeResponseEvent_dtor_ChallengeResponseEvent (0x4200d0)
