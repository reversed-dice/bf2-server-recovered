// FUNCTION: BF2 0x8b2750
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b2750() {
    void* g = (void*)0x10c9520;
    *(void**)0x010c9520 = (void*)0xc0db30;
    fn_0x00756000(g);
}
} }
