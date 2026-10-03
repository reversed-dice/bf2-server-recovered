// FUNCTION: BF2 0x8b2d10
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b2d10() {
    void* g = (void*)0x10cc7c0;
    *(void**)0x010cc7c0 = (void*)0xc09210;
    fn_0x00756000(g);
}
} }
