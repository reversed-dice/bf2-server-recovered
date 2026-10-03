// FUNCTION: BF2 0x422e70
namespace dice { namespace hfe {
extern void func_439a80(void*);
extern void func_4085b8(void*);
class CreateKitEvent {
public:
    void* vtable;
    void destroy();
};
void CreateKitEvent::destroy() {
    vtable = (void*)0xb2bd70;
    func_439a80(this);
    func_4085b8(this);
}
} }
// REVERSED_FUNCTION: dice_hfe_CreateKitEvent_dtor_CreateKitEvent (0x422e70)
