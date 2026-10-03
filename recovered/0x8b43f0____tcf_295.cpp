// FUNCTION: BF2 0x8b43f0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b43f0() {
    void* g = (void*)0x10dea00;
    *(void**)0x010dea00 = (void*)0xbeeed0;
    fn_0x00756000(g);
}
} }
