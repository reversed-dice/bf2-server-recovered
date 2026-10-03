// FUNCTION: BF2 0x860800
namespace dice { namespace hfe { namespace world {
extern void func_0x00756000(void*);
void dtor_0x860800(void* p) {
    *(void**)p = (void*)0xbbf1b0;
    func_0x00756000(p);
}
} } }
// REVERSED_FUNCTION: dice_hfe_io_anonymous_namespace_ConsoleClass539_dtor_ConsoleClass539 (0x860800)
