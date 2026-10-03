// FUNCTION: BF2 0xabcd10
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_abcd10() {
    void* g = (void*)0x11380e0;
    *(void**)0x011380e0 = (void*)0xc7f550;
    fn_0x00756000(g);
}
} }
