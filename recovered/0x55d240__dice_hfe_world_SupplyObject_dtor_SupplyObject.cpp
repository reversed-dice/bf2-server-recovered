// FUNCTION: BF2 0x55d240
namespace dice { namespace hfe {
class SupplyObject {
public:
    void* vtable1;
    char _pad[0xf8];
    void* vtable2;
    void destroy();
};
extern void func_573ec0(void*);
void SupplyObject::destroy() {
    vtable1 = (void*)0xb50950;
    vtable2 = (void*)0xb50c60;
    func_573ec0(this);
}
} }
// REVERSED_FUNCTION: dice_hfe_world_SupplyObject_dtor_SupplyObject (0x55d240)
