// FUNCTION: BF2 0x8b31f0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b31f0() {
    void* g = (void*)0x10e9320;
    *(void**)0x010e9320 = (void*)0xbdfb10;
    fn_0x00756000(g);
}
} }
