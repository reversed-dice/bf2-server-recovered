// FUNCTION: BF2 0x8b20f0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b20f0() {
    void* g = (void*)0x10eb860;
    *(void**)0x010eb860 = (void*)0xbdc570;
    fn_0x00756000(g);
}
} }
