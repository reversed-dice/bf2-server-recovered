// FUNCTION: BF2 0x8a0ab0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8a0ab0() {
    void* g = (void*)0x10c40e0;
    *(void**)0x010c40e0 = (void*)0xbd0210;
    fn_0x00756000(g);
}
} }
