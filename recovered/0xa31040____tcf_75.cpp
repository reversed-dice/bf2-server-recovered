// FUNCTION: BF2 0xa31040
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_a31040() {
    void* g = (void*)0x111de00;
    *(void**)0x0111de00 = (void*)0xc56030;
    fn_0x00756000(g);
}
} }
