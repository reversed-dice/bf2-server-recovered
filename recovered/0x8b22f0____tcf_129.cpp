// FUNCTION: BF2 0x8b22f0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b22f0() {
    void* g = (void*)0x10ea520;
    *(void**)0x010ea520 = (void*)0xbde110;
    fn_0x00756000(g);
}
} }
