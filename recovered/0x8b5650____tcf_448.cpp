// FUNCTION: BF2 0x8b5650
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b5650() {
    void* g = (void*)0x10d3de0;
    *(void**)0x010d3de0 = (void*)0xbfe770;
    fn_0x00756000(g);
}
} }
