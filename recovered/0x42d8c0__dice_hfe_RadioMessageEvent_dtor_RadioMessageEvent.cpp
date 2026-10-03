// FUNCTION: BF2 0x42d8c0
namespace dice { namespace hfe {
extern void func_439a80(void*);
extern void func_4085b8(void*);
class RadioMessageEvent {
public:
    void* vtable;
    void destroy();
};
void RadioMessageEvent::destroy() {
    vtable = (void*)0xb2d550;
    func_439a80(this);
    func_4085b8(this);
}
} }
// REVERSED_FUNCTION: dice_hfe_RadioMessageEvent_dtor_RadioMessageEvent (0x42d8c0)
