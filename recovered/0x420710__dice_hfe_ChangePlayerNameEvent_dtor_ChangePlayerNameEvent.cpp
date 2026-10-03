// FUNCTION: BF2 0x420710
namespace dice { namespace hfe {
extern void func_439a80(void*);
extern void func_4085b8(void*);
class ChangePlayerNameEvent {
public:
    void* vtable;
    void destroy();
};
void ChangePlayerNameEvent::destroy() {
    vtable = (void*)0xb2b710;
    func_439a80(this);
    func_4085b8(this);
}
} }
// REVERSED_FUNCTION: dice_hfe_ChangePlayerNameEvent_dtor_ChangePlayerNameEvent (0x420710)
