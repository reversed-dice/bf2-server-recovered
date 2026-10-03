// FUNCTION: BF2 0x880200
namespace dice { namespace hfe { namespace world {
extern void func_0x00756000(void*);
void dtor_0x880200(void* p) {
    *(void**)p = (void*)0xbc5bd0;
    func_0x00756000(p);
}
} } }
// REVERSED_FUNCTION: dice_hfe_anonymous_namespace_ConsoleClass198_dtor_ConsoleClass198 (0x880200)
