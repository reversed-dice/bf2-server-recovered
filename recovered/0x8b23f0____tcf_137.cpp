// FUNCTION: BF2 0x8b23f0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b23f0() {
    void* g = (void*)0x10e9c20;
    *(void**)0x010e9c20 = (void*)0xbdee10;
    fn_0x00756000(g);
}
} }
