// FUNCTION: BF2 0x8b5710
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b5710() {
    void* g = (void*)0x10d3720;
    *(void**)0x010d3720 = (void*)0xbff130;
    fn_0x00756000(g);
}
} }
