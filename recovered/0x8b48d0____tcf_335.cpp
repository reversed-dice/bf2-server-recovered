// FUNCTION: BF2 0x8b48d0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b48d0() {
    void* g = (void*)0x10dbd00;
    *(void**)0x010dbd00 = (void*)0xbf2fd0;
    fn_0x00756000(g);
}
} }
