// FUNCTION: BF2 0x4342b0
namespace dice { namespace hfe {
extern void func_439a80(void*);
extern void func_4085b8(void*);
class UnlockEvent {
public:
    void* vtable;
    void destroy();
};
void UnlockEvent::destroy() {
    vtable = (void*)0xb2e150;
    func_439a80(this);
    func_4085b8(this);
}
} }
// REVERSED_FUNCTION: dice_hfe_UnlockEvent_dtor_UnlockEvent (0x4342b0)
