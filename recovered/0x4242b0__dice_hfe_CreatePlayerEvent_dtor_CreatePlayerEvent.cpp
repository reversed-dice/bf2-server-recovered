// FUNCTION: BF2 0x4242b0
namespace dice { namespace hfe {
extern void func_439a80(void*);
extern void func_4085b8(void*);
class CreatePlayerEvent {
public:
    void* vtable;
    void destroy();
};
void CreatePlayerEvent::destroy() {
    vtable = (void*)0xb2c010;
    func_439a80(this);
    func_4085b8(this);
}
} }
// REVERSED_FUNCTION: dice_hfe_CreatePlayerEvent_dtor_CreatePlayerEvent (0x4242b0)
