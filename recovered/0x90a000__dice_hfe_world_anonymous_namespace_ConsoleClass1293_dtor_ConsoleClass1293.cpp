// FUNCTION: BF2 0x90a000
namespace dice { namespace hfe { namespace world {
extern void func_0x00756000(void*);
void dtor_0x90a000(void* p) {
    *(void**)p = (void*)0xc110d0;
    func_0x00756000(p);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass1293_dtor_ConsoleClass1293 (0x90a000)
