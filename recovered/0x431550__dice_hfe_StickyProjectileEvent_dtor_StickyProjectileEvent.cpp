// FUNCTION: BF2 0x431550
namespace dice { namespace hfe {
extern void func_439a80(void*);
extern void func_4085b8(void*);
class StickyProjectileEvent {
public:
    void* vtable;
    void destroy();
};
void StickyProjectileEvent::destroy() {
    vtable = (void*)0xb2dc10;
    func_439a80(this);
    func_4085b8(this);
}
} }
// REVERSED_FUNCTION: dice_hfe_StickyProjectileEvent_dtor_StickyProjectileEvent (0x431550)
