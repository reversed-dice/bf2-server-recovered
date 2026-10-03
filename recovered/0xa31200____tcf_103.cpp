// FUNCTION: BF2 0xa31200
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_a31200() {
    void* g = (void*)0x111be80;
    *(void**)0x0111be80 = (void*)0xc59130;
    fn_0x00756000(g);
}
} }
