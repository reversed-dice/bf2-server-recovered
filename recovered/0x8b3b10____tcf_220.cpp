// FUNCTION: BF2 0x8b3b10
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b3b10() {
    void* g = (void*)0x10e3ec0;
    *(void**)0x010e3ec0 = (void*)0xbe74f0;
    fn_0x00756000(g);
}
} }
