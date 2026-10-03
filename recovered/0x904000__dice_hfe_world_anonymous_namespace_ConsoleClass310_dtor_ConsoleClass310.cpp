// FUNCTION: BF2 0x904000
namespace dice { namespace hfe { namespace world {
extern void func_0x00756000(void*);
void dtor_0x904000(void* p) {
    *(void**)p = (void*)0xbda830;
    func_0x00756000(p);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass310_dtor_ConsoleClass310 (0x904000)
