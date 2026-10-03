// FUNCTION: BF2 0x42b410
namespace dice { namespace hfe {
extern void func_439a80(void*);
extern void func_4085b8(void*);
class MedalEvent {
public:
    void* vtable;
    void destroy();
};
void MedalEvent::destroy() {
    vtable = (void*)0xb2d190;
    func_439a80(this);
    func_4085b8(this);
}
} }
// REVERSED_FUNCTION: dice_hfe_MedalEvent_dtor_MedalEvent (0x42b410)
