// FUNCTION: BF2 0x8b3c10
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b3c10() {
    void* g = (void*)0x10e3580;
    *(void**)0x010e3580 = (void*)0xbe81f0;
    fn_0x00756000(g);
}
} }
