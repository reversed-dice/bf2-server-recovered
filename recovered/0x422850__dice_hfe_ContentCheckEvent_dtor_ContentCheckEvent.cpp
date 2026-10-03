// FUNCTION: BF2 0x422850
namespace dice { namespace hfe {
extern void func_439a80(void*);
extern void func_4085b8(void*);
class ContentCheckEvent {
public:
    void* vtable;
    void destroy();
};
void ContentCheckEvent::destroy() {
    vtable = (void*)0xb2bcb0;
    func_439a80(this);
    func_4085b8(this);
}
} }
// REVERSED_FUNCTION: dice_hfe_ContentCheckEvent_dtor_ContentCheckEvent (0x422850)
