// FUNCTION: BF2 0x8b40b0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b40b0() {
    void* g = (void*)0x10e0980;
    *(void**)0x010e0980 = (void*)0xbec150;
    fn_0x00756000(g);
}
} }
