// FUNCTION: BF2 0x8b36d0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b36d0() {
    void* g = (void*)0x10e6500;
    *(void**)0x010e6500 = (void*)0xbe3db0;
    fn_0x00756000(g);
}
} }
