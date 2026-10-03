// FUNCTION: BF2 0xa30f00
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_a30f00() {
    void* g = (void*)0x111eca0;
    *(void**)0x0111eca0 = (void*)0xc54970;
    fn_0x00756000(g);
}
} }
