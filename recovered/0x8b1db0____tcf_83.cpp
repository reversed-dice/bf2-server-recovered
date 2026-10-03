// FUNCTION: BF2 0x8b1db0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b1db0() {
    void* g = (void*)0x10ed900;
    *(void**)0x010ed900 = (void*)0xbd9650;
    fn_0x00756000(g);
}
} }
