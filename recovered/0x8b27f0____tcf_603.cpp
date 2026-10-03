// FUNCTION: BF2 0x8b27f0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b27f0() {
    void* g = (void*)0x10c8f80;
    *(void**)0x010c8f80 = (void*)0xc0e350;
    fn_0x00756000(g);
}
} }
