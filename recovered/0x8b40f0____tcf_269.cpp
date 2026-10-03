// FUNCTION: BF2 0x8b40f0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b40f0() {
    void* g = (void*)0x10e0740;
    *(void**)0x010e0740 = (void*)0xbec490;
    fn_0x00756000(g);
}
} }
