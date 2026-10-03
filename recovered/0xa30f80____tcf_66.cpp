// FUNCTION: BF2 0xa30f80
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_a30f80() {
    void* g = (void*)0x111e820;
    *(void**)0x0111e820 = (void*)0xc55070;
    fn_0x00756000(g);
}
} }
