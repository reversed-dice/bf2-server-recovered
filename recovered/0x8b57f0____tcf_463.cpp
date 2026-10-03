// FUNCTION: BF2 0x8b57f0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b57f0() {
    void* g = (void*)0x10d2d00;
    *(void**)0x010d2d00 = (void*)0xbfffd0;
    fn_0x00756000(g);
}
} }
