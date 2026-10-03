// FUNCTION: BF2 0x8b5d50
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b5d50() {
    void* g = (void*)0x10cfb80;
    *(void**)0x010cfb80 = (void*)0xc04750;
    fn_0x00756000(g);
}
} }
