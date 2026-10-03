// FUNCTION: BF2 0x8b56b0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b56b0() {
    void* g = (void*)0x10d3a80;
    *(void**)0x010d3a80 = (void*)0xbfec50;
    fn_0x00756000(g);
}
} }
