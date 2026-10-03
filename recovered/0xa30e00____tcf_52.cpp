// FUNCTION: BF2 0xa30e00
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_a30e00() {
    void* g = (void*)0x111f7e0;
    *(void**)0x0111f7e0 = (void*)0xc537f0;
    fn_0x00756000(g);
}
} }
