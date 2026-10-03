// FUNCTION: BF2 0x8b56f0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b56f0() {
    void* g = (void*)0x10d3840;
    *(void**)0x010d3840 = (void*)0xbfef90;
    fn_0x00756000(g);
}
} }
