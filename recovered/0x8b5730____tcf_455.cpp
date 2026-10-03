// FUNCTION: BF2 0x8b5730
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b5730() {
    void* g = (void*)0x10d3600;
    *(void**)0x010d3600 = (void*)0xbff2d0;
    fn_0x00756000(g);
}
} }
