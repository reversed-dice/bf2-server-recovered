// FUNCTION: BF2 0x420ed0
namespace dice { namespace hfe {
extern void func_439a80(void*);
extern void func_4085b8(void*);
class ChangeSquadNameEvent {
public:
    void* vtable;
    void destroy();
};
void ChangeSquadNameEvent::destroy() {
    vtable = (void*)0xb2b7f0;
    func_439a80(this);
    func_4085b8(this);
}
} }
// REVERSED_FUNCTION: dice_hfe_ChangeSquadNameEvent_dtor_ChangeSquadNameEvent (0x420ed0)
