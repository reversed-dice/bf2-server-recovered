// FUNCTION: BF2 0x55f200
namespace dice { namespace hfe {
class TargetObject {
public:
    void* vtable1;
    char _pad[0xf8];
    void* vtable2;
    void destroy();
};
extern void func_573ec0(void*);
void TargetObject::destroy() {
    vtable1 = (void*)0xb512f0;
    vtable2 = (void*)0xb51600;
    func_573ec0(this);
}
} }
// REVERSED_FUNCTION: dice_hfe_world_TargetObject_dtor_TargetObject (0x55f200)
