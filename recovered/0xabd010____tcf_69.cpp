// FUNCTION: BF2 0xabd010
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_abd010() {
    void* g = (void*)0x1135e00;
    *(void**)0x01135e00 = (void*)0xc82b90;
    fn_0x00756000(g);
}
} }
