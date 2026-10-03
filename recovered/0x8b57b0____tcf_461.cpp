// FUNCTION: BF2 0x8b57b0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b57b0() {
    void* g = (void*)0x10d2f40;
    *(void**)0x010d2f40 = (void*)0xbffc90;
    fn_0x00756000(g);
}
} }
