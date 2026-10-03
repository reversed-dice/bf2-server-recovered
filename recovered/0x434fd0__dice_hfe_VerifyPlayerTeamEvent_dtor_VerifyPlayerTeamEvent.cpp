// FUNCTION: BF2 0x434fd0
namespace dice { namespace hfe {
extern void func_439a80(void*);
extern void func_4085b8(void*);
class VerifyPlayerTeamEvent {
public:
    void* vtable;
    void destroy();
};
void VerifyPlayerTeamEvent::destroy() {
    vtable = (void*)0xb2e2d0;
    func_439a80(this);
    func_4085b8(this);
}
} }
// REVERSED_FUNCTION: dice_hfe_VerifyPlayerTeamEvent_dtor_VerifyPlayerTeamEvent (0x434fd0)
