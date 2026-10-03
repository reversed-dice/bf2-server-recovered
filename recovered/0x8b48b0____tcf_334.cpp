// FUNCTION: BF2 0x8b48b0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b48b0() {
    void* g = (void*)0x10dbe20;
    *(void**)0x010dbe20 = (void*)0xbf2e30;
    fn_0x00756000(g);
}
} }
