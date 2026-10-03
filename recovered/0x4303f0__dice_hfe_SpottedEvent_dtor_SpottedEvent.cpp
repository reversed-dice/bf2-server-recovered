// FUNCTION: BF2 0x4303f0
namespace dice { namespace hfe {
extern void func_439a80(void*);
extern void func_4085b8(void*);
class SpottedEvent {
public:
    void* vtable;
    void destroy();
};
void SpottedEvent::destroy() {
    vtable = (void*)0xb2db50;
    func_439a80(this);
    func_4085b8(this);
}
} }
// REVERSED_FUNCTION: dice_hfe_SpottedEvent_dtor_SpottedEvent (0x4303f0)
