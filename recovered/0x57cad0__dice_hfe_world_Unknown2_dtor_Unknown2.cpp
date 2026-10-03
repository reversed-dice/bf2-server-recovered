// FUNCTION: BF2 0x57cad0
namespace dice { namespace hfe {
class Unknown2 {
public:
    void* vtable1;
    char _pad[0xf8];
    void* vtable2;
    void destroy();
};
extern void func_573ec0(void*);
void Unknown2::destroy() {
    vtable1 = (void*)0xb5a530;
    vtable2 = (void*)0xb5a840;
    func_573ec0(this);
}
} }
// REVERSED_FUNCTION: dice_hfe_world_Unknown2_dtor_Unknown2 (0x57cad0)
