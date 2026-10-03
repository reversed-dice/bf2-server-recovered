// FUNCTION: BF2 0x8b1bb0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b1bb0() {
    void* g = (void*)0x10eec20;
    *(void**)0x010eec20 = (void*)0xbd7ab0;
    fn_0x00756000(g);
}
} }
