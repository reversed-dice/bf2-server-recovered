// FUNCTION: BF2 0x423a10
namespace dice { namespace hfe {
extern void func_439a80(void*);
extern void func_4085b8(void*);
class CreateObjectEvent {
public:
    void* vtable;
    void destroy();
};
void CreateObjectEvent::destroy() {
    vtable = (void*)0xb2be90;
    func_439a80(this);
    func_4085b8(this);
}
} }
// REVERSED_FUNCTION: dice_hfe_CreateObjectEvent_dtor_CreateObjectEvent (0x423a10)
