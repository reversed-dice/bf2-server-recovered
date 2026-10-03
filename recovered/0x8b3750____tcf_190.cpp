// FUNCTION: BF2 0x8b3750
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b3750() {
    void* g = (void*)0x10e6080;
    *(void**)0x010e6080 = (void*)0xbe4430;
    fn_0x00756000(g);
}
} }
