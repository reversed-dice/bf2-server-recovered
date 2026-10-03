// FUNCTION: BF2 0x8b3ff0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b3ff0() {
    void* g = (void*)0x10e1060;
    *(void**)0x010e1060 = (void*)0xbeb790;
    fn_0x00756000(g);
}
} }
