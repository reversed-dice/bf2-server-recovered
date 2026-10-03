// FUNCTION: BF2 0x5699b0
namespace dice { namespace hfe {
class Unknown1 {
public:
    void* vtable1;
    char _pad[0xf8];
    void* vtable2;
    void destroy();
};
extern void func_573ec0(void*);
void Unknown1::destroy() {
    vtable1 = (void*)0xb54a50;
    vtable2 = (void*)0xb54d60;
    func_573ec0(this);
}
} }
// REVERSED_FUNCTION: dice_hfe_world_Unknown1_dtor_Unknown1 (0x5699b0)
