// FUNCTION: BF2 0x8b3af0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b3af0() {
    void* g = (void*)0x10e3fe0;
    *(void**)0x010e3fe0 = (void*)0xbe7350;
    fn_0x00756000(g);
}
} }
