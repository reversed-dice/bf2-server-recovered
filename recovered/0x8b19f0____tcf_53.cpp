// FUNCTION: BF2 0x8b19f0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b19f0() {
    void* g = (void*)0x10efac0;
    *(void**)0x010efac0 = (void*)0xbd6590;
    fn_0x00756000(g);
}
} }
