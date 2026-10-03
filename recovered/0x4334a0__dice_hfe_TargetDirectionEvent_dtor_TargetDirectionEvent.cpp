// FUNCTION: BF2 0x4334a0
namespace dice { namespace hfe {
extern void func_439a80(void*);
extern void func_4085b8(void*);
class TargetDirectionEvent {
public:
    void* vtable;
    void destroy();
};
void TargetDirectionEvent::destroy() {
    vtable = (void*)0xb2df10;
    func_439a80(this);
    func_4085b8(this);
}
} }
// REVERSED_FUNCTION: dice_hfe_TargetDirectionEvent_dtor_TargetDirectionEvent (0x4334a0)
