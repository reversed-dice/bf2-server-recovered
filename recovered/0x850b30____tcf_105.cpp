// FUNCTION: BF2 0x850b30
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_850b30() {
    void* g = (void*)0x10b5020;
    *(void**)0x010b5020 = (void*)0xbbf1b0;
    fn_0x00756000(g);
}
} }
