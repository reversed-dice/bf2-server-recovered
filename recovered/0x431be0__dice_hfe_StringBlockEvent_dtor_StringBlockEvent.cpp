// FUNCTION: BF2 0x431be0
namespace dice { namespace hfe {
extern void func_439a80(void*);
extern void func_4085b8(void*);
class StringBlockEvent {
public:
    void* vtable;
    void destroy();
};
void StringBlockEvent::destroy() {
    vtable = (void*)0xb2dcd0;
    func_439a80(this);
    func_4085b8(this);
}
} }
// REVERSED_FUNCTION: dice_hfe_StringBlockEvent_dtor_StringBlockEvent (0x431be0)
