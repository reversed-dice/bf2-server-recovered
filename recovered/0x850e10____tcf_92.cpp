// FUNCTION: BF2 0x850e10
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_850e10() {
    void* g = (void*)0x10b5ec0;
    *(void**)0x010b5ec0 = (void*)0xbbdc90;
    fn_0x00756000(g);
}
} }
