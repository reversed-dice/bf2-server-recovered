// FUNCTION: BF2 0x8b38d0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b38d0() {
    void* g = (void*)0x10e5300;
    *(void**)0x010e5300 = (void*)0xbe57b0;
    fn_0x00756000(g);
}
} }
