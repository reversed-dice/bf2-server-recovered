// FUNCTION: BF2 0x8b2010
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b2010() {
    void* g = (void*)0x10ec040;
    *(void**)0x010ec040 = (void*)0xbdba10;
    fn_0x00756000(g);
}
} }
