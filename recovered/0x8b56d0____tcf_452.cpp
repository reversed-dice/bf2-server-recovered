// FUNCTION: BF2 0x8b56d0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b56d0() {
    void* g = (void*)0x10d3960;
    *(void**)0x010d3960 = (void*)0xbfedf0;
    fn_0x00756000(g);
}
} }
