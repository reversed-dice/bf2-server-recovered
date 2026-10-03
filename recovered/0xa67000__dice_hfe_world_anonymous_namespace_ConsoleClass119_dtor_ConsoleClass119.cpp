// FUNCTION: BF2 0xa67000
namespace dice { namespace hfe { namespace world {
extern void func_0x00756000(void*);
void dtor_0xa67000(void* p) {
    *(void**)p = (void*)0xc65110;
    func_0x00756000(p);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass119_dtor_ConsoleClass119 (0xa67000)
