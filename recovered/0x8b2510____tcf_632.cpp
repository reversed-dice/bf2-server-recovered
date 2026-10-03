// FUNCTION: BF2 0x8b2510
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b2510() {
    void* g = (void*)0x10c6ee0;
    *(void**)0x010c6ee0 = (void*)0xc11270;
    fn_0x00756000(g);
}
} }
