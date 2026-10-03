// FUNCTION: BF2 0x8b40d0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b40d0() {
    void* g = (void*)0x10e0860;
    *(void**)0x010e0860 = (void*)0xbec2f0;
    fn_0x00756000(g);
}
} }
