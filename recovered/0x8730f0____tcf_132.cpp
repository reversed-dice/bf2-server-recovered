// FUNCTION: BF2 0x8730f0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8730f0() {
    void* g = (void*)0x10ba3e0;
    *(void**)0x010ba3e0 = (void*)0xbcab70;
    fn_0x00756000(g);
}
} }
