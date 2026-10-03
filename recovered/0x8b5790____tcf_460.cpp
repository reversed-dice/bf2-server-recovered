// FUNCTION: BF2 0x8b5790
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b5790() {
    void* g = (void*)0x10d3060;
    *(void**)0x010d3060 = (void*)0xbffaf0;
    fn_0x00756000(g);
}
} }
