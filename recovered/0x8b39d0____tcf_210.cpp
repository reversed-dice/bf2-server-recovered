// FUNCTION: BF2 0x8b39d0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b39d0() {
    void* g = (void*)0x10e4a00;
    *(void**)0x010e4a00 = (void*)0xbe64b0;
    fn_0x00756000(g);
}
} }
