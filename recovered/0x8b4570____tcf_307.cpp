// FUNCTION: BF2 0x8b4570
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b4570() {
    void* g = (void*)0x10ddc80;
    *(void**)0x010ddc80 = (void*)0xbf0250;
    fn_0x00756000(g);
}
} }
