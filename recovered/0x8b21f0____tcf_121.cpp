// FUNCTION: BF2 0x8b21f0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b21f0() {
    void* g = (void*)0x10eae40;
    *(void**)0x010eae40 = (void*)0xbdd410;
    fn_0x00756000(g);
}
} }
