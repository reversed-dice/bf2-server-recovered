// FUNCTION: BF2 0x8b5950
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b5950() {
    void* g = (void*)0x10d20a0;
    *(void**)0x010d20a0 = (void*)0xc011b0;
    fn_0x00756000(g);
}
} }
