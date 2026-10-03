// FUNCTION: BF2 0x8b1ed0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b1ed0() {
    void* g = (void*)0x10ecdc0;
    *(void**)0x010ecdc0 = (void*)0xbda690;
    fn_0x00756000(g);
}
} }
