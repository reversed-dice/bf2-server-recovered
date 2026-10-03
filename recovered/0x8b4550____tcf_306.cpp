// FUNCTION: BF2 0x8b4550
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b4550() {
    void* g = (void*)0x10ddda0;
    *(void**)0x010ddda0 = (void*)0xbf00b0;
    fn_0x00756000(g);
}
} }
