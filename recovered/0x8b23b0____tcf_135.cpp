// FUNCTION: BF2 0x8b23b0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b23b0() {
    void* g = (void*)0x10e9e60;
    *(void**)0x010e9e60 = (void*)0xbdead0;
    fn_0x00756000(g);
}
} }
