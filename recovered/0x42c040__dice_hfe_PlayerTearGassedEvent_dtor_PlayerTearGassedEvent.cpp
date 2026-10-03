// FUNCTION: BF2 0x42c040
namespace dice { namespace hfe {
extern void func_439a80(void*);
extern void func_4085b8(void*);
class PlayerTearGassedEvent {
public:
    void* vtable;
    void destroy();
};
void PlayerTearGassedEvent::destroy() {
    vtable = (void*)0xb2d310;
    func_439a80(this);
    func_4085b8(this);
}
} }
// REVERSED_FUNCTION: dice_hfe_PlayerTearGassedEvent_dtor_PlayerTearGassedEvent (0x42c040)
