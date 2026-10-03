// FUNCTION: BF2 0x63a420
namespace dice { namespace hfe {
class Unknown3 {
public:
    void* vtable1;
    char _pad[0xf8];
    void* vtable2;
    void destroy();
};
extern void func_573ec0(void*);
void Unknown3::destroy() {
    vtable1 = (void*)0xb9c180;
    vtable2 = (void*)0xb9c490;
    func_573ec0(this);
}
} }
// REVERSED_FUNCTION: dice_hfe_world_Unknown3_dtor_Unknown3 (0x63a420)
