// FUNCTION: BF2 0x8b4210
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b4210() {
    void* g = (void*)0x10dfc00;
    *(void**)0x010dfc00 = (void*)0xbed4d0;
    fn_0x00756000(g);
}
} }
