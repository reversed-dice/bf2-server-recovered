// FUNCTION: BF2 0x42a5f0
namespace dice { namespace hfe {
extern void func_439a80(void*);
extern void func_4085b8(void*);
class KickBanEvent {
public:
    void* vtable;
    void destroy();
};
void KickBanEvent::destroy() {
    vtable = (void*)0xb2cf50;
    func_439a80(this);
    func_4085b8(this);
}
} }
// REVERSED_FUNCTION: dice_hfe_KickBanEvent_dtor_KickBanEvent (0x42a5f0)
