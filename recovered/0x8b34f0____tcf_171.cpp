// FUNCTION: BF2 0x8b34f0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b34f0() {
    void* g = (void*)0x10e75e0;
    *(void**)0x010e75e0 = (void*)0xbe2550;
    fn_0x00756000(g);
}
} }
