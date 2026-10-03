// FUNCTION: BF2 0x8b3bb0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b3bb0() {
    void* g = (void*)0x10e3900;
    *(void**)0x010e3900 = (void*)0xbe7d10;
    fn_0x00756000(g);
}
} }
