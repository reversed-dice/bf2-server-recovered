// FUNCTION: BF2 0x8b5770
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b5770() {
    void* g = (void*)0x10d3180;
    *(void**)0x010d3180 = (void*)0xbff950;
    fn_0x00756000(g);
}
} }
