// FUNCTION: BF2 0x425d80
namespace dice { namespace hfe {
extern void func_439a80(void*);
extern void func_4085b8(void*);
class EndOfRoundEvent {
public:
    void* vtable;
    void destroy();
};
void EndOfRoundEvent::destroy() {
    vtable = (void*)0xb2c590;
    func_439a80(this);
    func_4085b8(this);
}
} }
// REVERSED_FUNCTION: dice_hfe_EndOfRoundEvent_dtor_EndOfRoundEvent (0x425d80)
