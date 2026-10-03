// FUNCTION: BF2 0x42f250
namespace dice { namespace hfe {
extern void func_439a80(void*);
extern void func_4085b8(void*);
class SetAcceptOrderEvent {
public:
    void* vtable;
    void destroy();
};
void SetAcceptOrderEvent::destroy() {
    vtable = (void*)0xb2d850;
    func_439a80(this);
    func_4085b8(this);
}
} }
// REVERSED_FUNCTION: dice_hfe_SetAcceptOrderEvent_dtor_SetAcceptOrderEvent (0x42f250)
