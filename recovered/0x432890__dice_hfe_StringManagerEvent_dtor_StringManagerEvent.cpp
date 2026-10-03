// FUNCTION: BF2 0x432890
namespace dice { namespace hfe {
extern void func_439a80(void*);
extern void func_4085b8(void*);
class StringManagerEvent {
public:
    void* vtable;
    void destroy();
};
void StringManagerEvent::destroy() {
    vtable = (void*)0xb2dd90;
    func_439a80(this);
    func_4085b8(this);
}
} }
// REVERSED_FUNCTION: dice_hfe_StringManagerEvent_dtor_StringManagerEvent (0x432890)
