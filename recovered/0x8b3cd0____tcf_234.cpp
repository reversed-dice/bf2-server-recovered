// FUNCTION: BF2 0x8b3cd0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b3cd0() {
    void* g = (void*)0x10e2ec0;
    *(void**)0x010e2ec0 = (void*)0xbe8bb0;
    fn_0x00756000(g);
}
} }
