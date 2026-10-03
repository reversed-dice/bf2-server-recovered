// FUNCTION: BF2 0x880500
namespace dice { namespace hfe { namespace world {
extern void func_0x00756000(void*);
void dtor_0x880500(void* p) {
    *(void**)p = (void*)0xbc75d0;
    func_0x00756000(p);
}
} } }
// REVERSED_FUNCTION: dice_hfe_anonymous_namespace_ConsoleClass216_dtor_ConsoleClass216 (0x880500)
