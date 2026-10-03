// FUNCTION: BF2 0x8b1ff0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b1ff0() {
    void* g = (void*)0x10ec160;
    *(void**)0x010ec160 = (void*)0xbdb870;
    fn_0x00756000(g);
}
} }
