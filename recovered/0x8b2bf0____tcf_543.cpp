// FUNCTION: BF2 0x8b2bf0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b2bf0() {
    void* g = (void*)0x10cd300;
    *(void**)0x010cd300 = (void*)0xc081d0;
    fn_0x00756000(g);
}
} }
