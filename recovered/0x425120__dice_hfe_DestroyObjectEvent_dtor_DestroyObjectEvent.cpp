// FUNCTION: BF2 0x425120
namespace dice { namespace hfe {
extern void func_439a80(void*);
extern void func_4085b8(void*);
class DestroyObjectEvent {
public:
    void* vtable;
    void destroy();
};
void DestroyObjectEvent::destroy() {
    vtable = (void*)0xb2c310;
    func_439a80(this);
    func_4085b8(this);
}
} }
// REVERSED_FUNCTION: dice_hfe_DestroyObjectEvent_dtor_DestroyObjectEvent (0x425120)
