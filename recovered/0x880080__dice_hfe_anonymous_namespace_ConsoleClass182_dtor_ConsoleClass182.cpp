// FUNCTION: BF2 0x880080
namespace dice { namespace hfe { namespace world {
extern void func_0x00756000(void*);
void dtor_0x880080(void* p) {
    *(void**)p = (void*)0xbc4ed0;
    func_0x00756000(p);
}
} } }
// REVERSED_FUNCTION: dice_hfe_anonymous_namespace_ConsoleClass182_dtor_ConsoleClass182 (0x880080)
