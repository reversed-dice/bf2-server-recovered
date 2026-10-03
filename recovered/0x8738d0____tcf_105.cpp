// FUNCTION: BF2 0x8738d0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8738d0() {
    void* g = (void*)0x10bc240;
    *(void**)0x010bc240 = (void*)0xbc7f90;
    fn_0x00756000(g);
}
} }
