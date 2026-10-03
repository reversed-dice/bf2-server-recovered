// FUNCTION: BF2 0xa30e80
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_a30e80() {
    void* g = (void*)0x111f000;
    *(void**)0x0111f000 = (void*)0xc54430;
    fn_0x00756000(g);
}
} }
