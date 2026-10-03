// FUNCTION: BF2 0x8b29f0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b29f0() {
    void* g = (void*)0x10ce500;
    *(void**)0x010ce500 = (void*)0xc067d0;
    fn_0x00756000(g);
}
} }
