// FUNCTION: BF2 0x8b5630
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b5630() {
    void* g = (void*)0x10d3f00;
    *(void**)0x010d3f00 = (void*)0xbfe5d0;
    fn_0x00756000(g);
}
} }
