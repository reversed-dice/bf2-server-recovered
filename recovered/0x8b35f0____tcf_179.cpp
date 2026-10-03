// FUNCTION: BF2 0x8b35f0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b35f0() {
    void* g = (void*)0x10e6ce0;
    *(void**)0x010e6ce0 = (void*)0xbe3250;
    fn_0x00756000(g);
}
} }
