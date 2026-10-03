// FUNCTION: BF2 0x8b41f0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b41f0() {
    void* g = (void*)0x10dfd20;
    *(void**)0x010dfd20 = (void*)0xbed330;
    fn_0x00756000(g);
}
} }
