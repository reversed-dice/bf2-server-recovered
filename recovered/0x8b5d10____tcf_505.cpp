// FUNCTION: BF2 0x8b5d10
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b5d10() {
    void* g = (void*)0x10cfdc0;
    *(void**)0x010cfdc0 = (void*)0xc04410;
    fn_0x00756000(g);
}
} }
