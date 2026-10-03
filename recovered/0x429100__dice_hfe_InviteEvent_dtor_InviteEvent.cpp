// FUNCTION: BF2 0x429100
namespace dice { namespace hfe {
extern void func_439a80(void*);
extern void func_4085b8(void*);
class InviteEvent {
public:
    void* vtable;
    void destroy();
};
void InviteEvent::destroy() {
    vtable = (void*)0xb2cd10;
    func_439a80(this);
    func_4085b8(this);
}
} }
// REVERSED_FUNCTION: dice_hfe_InviteEvent_dtor_InviteEvent (0x429100)
