// FUNCTION: BF2 0x42eb00
namespace dice { namespace hfe {
extern void func_439a80(void*);
extern void func_4085b8(void*);
class RequestEvent {
public:
    void* vtable;
    void destroy();
};
void RequestEvent::destroy() {
    vtable = (void*)0xb2d790;
    func_439a80(this);
    func_4085b8(this);
}
} }
// REVERSED_FUNCTION: dice_hfe_RequestEvent_dtor_RequestEvent (0x42eb00)
