// FUNCTION: BF2 0x8b1e30
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b1e30() {
    void* g = (void*)0x10ed360;
    *(void**)0x010ed360 = (void*)0xbd9e70;
    fn_0x00756000(g);
}
} }
