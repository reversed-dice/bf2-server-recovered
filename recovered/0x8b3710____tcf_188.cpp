// FUNCTION: BF2 0x8b3710
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b3710() {
    void* g = (void*)0x10e62c0;
    *(void**)0x010e62c0 = (void*)0xbe40f0;
    fn_0x00756000(g);
}
} }
