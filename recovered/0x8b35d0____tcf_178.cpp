// FUNCTION: BF2 0x8b35d0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b35d0() {
    void* g = (void*)0x10e6e00;
    *(void**)0x010e6e00 = (void*)0xbe30b0;
    fn_0x00756000(g);
}
} }
