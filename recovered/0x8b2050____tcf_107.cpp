// FUNCTION: BF2 0x8b2050
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b2050() {
    void* g = (void*)0x10ebe00;
    *(void**)0x010ebe00 = (void*)0xbdbd50;
    fn_0x00756000(g);
}
} }
