// FUNCTION: BF2 0x42a170
namespace dice { namespace hfe {
extern void func_439a80(void*);
extern void func_4085b8(void*);
class JoinSquadEvent {
public:
    void* vtable;
    void destroy();
};
void JoinSquadEvent::destroy() {
    vtable = (void*)0xb2ce90;
    func_439a80(this);
    func_4085b8(this);
}
} }
// REVERSED_FUNCTION: dice_hfe_JoinSquadEvent_dtor_JoinSquadEvent (0x42a170)
