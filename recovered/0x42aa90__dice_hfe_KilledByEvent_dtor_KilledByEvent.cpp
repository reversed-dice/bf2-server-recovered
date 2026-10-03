// FUNCTION: BF2 0x42aa90
namespace dice { namespace hfe {
extern void func_439a80(void*);
extern void func_4085b8(void*);
class KilledByEvent {
public:
    void* vtable;
    void destroy();
};
void KilledByEvent::destroy() {
    vtable = (void*)0xb2d010;
    func_439a80(this);
    func_4085b8(this);
}
} }
// REVERSED_FUNCTION: dice_hfe_KilledByEvent_dtor_KilledByEvent (0x42aa90)
