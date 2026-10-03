// FUNCTION: BF2 0x8804d0
namespace dice { namespace hfe { namespace world {
extern void func_0x00756000(void*);
void dtor_0x8804d0(void* p) {
    *(void**)p = (void*)0xbc7430;
    func_0x00756000(p);
}
} } }
// REVERSED_FUNCTION: dice_hfe_anonymous_namespace_ConsoleClass215_dtor_ConsoleClass215 (0x8804d0)
