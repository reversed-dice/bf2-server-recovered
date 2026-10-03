// FUNCTION: BF2 0x42d1b0
namespace dice { namespace hfe {
extern void func_439a80(void*);
extern void func_4085b8(void*);
class PythonCommandEvent {
public:
    void* vtable;
    void destroy();
};
void PythonCommandEvent::destroy() {
    vtable = (void*)0xb2d490;
    func_439a80(this);
    func_4085b8(this);
}
} }
// REVERSED_FUNCTION: dice_hfe_PythonCommandEvent_dtor_PythonCommandEvent (0x42d1b0)
