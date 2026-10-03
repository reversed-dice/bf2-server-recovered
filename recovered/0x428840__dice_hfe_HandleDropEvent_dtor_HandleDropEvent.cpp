// FUNCTION: BF2 0x428840
namespace dice { namespace hfe {
extern void func_439a80(void*);
extern void func_4085b8(void*);
class HandleDropEvent {
public:
    void* vtable;
    void destroy();
};
void HandleDropEvent::destroy() {
    vtable = (void*)0xb2cc50;
    func_439a80(this);
    func_4085b8(this);
}
} }
// REVERSED_FUNCTION: dice_hfe_HandleDropEvent_dtor_HandleDropEvent (0x428840)
