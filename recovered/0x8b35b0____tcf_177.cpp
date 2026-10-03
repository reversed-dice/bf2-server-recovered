// FUNCTION: BF2 0x8b35b0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b35b0() {
    void* g = (void*)0x10e6f20;
    *(void**)0x010e6f20 = (void*)0xbe2f10;
    fn_0x00756000(g);
}
} }
