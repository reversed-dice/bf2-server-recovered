// FUNCTION: BF2 0x528d30
namespace dice { namespace hfe {
class KitPart {
public:
    void* vtable1;
    char _pad[0xf8];
    void* vtable2;
    char _pad2[0x130];
    void* vtable3;
    void destroy();
};
extern void func_573ec0(void*);
void KitPart::destroy() {
    vtable1 = (void*)0xb45030;
    vtable2 = (void*)0xb45350;
    vtable3 = (void*)0xb45388;
    func_573ec0(this);
}
} }
// REVERSED_FUNCTION: dice_hfe_world_KitPart_dtor_KitPart (0x528d30)
