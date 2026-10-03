// FUNCTION: BF2 0x8b48f0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b48f0() {
    void* g = (void*)0x10dbbe0;
    *(void**)0x010dbbe0 = (void*)0xbf3170;
    fn_0x00756000(g);
}
} }
