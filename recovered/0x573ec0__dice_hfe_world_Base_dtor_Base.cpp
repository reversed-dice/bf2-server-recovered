// FUNCTION: BF2 0x573ec0
namespace dice { namespace hfe {
class Base {
public:
    void* vtable1;
    char _pad[0xf8];
    void* vtable2;
    void destroy();
};
extern void func_573ec0(void*);
void Base::destroy() {
    vtable1 = (void*)0xb57780;
    vtable2 = (void*)0xb57a90;
    func_573ec0(this);
}
} }
// REVERSED_FUNCTION: dice_hfe_world_Base_dtor_Base (0x573ec0)
