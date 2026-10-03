// FUNCTION: BF2 0x8b4ab0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b4ab0() {
    void* g = (void*)0x10dac20;
    *(void**)0x010dac20 = (void*)0xbf4830;
    fn_0x00756000(g);
}
} }
