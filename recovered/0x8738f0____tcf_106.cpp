// FUNCTION: BF2 0x8738f0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8738f0() {
    void* g = (void*)0x10bc120;
    *(void**)0x010bc120 = (void*)0xbc8130;
    fn_0x00756000(g);
}
} }
