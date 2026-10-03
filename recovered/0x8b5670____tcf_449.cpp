// FUNCTION: BF2 0x8b5670
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b5670() {
    void* g = (void*)0x10d3cc0;
    *(void**)0x010d3cc0 = (void*)0xbfe910;
    fn_0x00756000(g);
}
} }
