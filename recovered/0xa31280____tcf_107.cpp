// FUNCTION: BF2 0xa31280
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_a31280() {
    void* g = (void*)0x111ba00;
    *(void**)0x0111ba00 = (void*)0xc59830;
    fn_0x00756000(g);
}
} }
