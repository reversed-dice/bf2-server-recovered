// FUNCTION: BF2 0x8b41b0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b41b0() {
    void* g = (void*)0x10e0080;
    *(void**)0x010e0080 = (void*)0xbece50;
    fn_0x00756000(g);
}
} }
