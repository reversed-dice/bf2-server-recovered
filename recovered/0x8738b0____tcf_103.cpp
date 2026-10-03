// FUNCTION: BF2 0x8738b0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8738b0() {
    void* g = (void*)0x10bc480;
    *(void**)0x010bc480 = (void*)0xbc7c50;
    fn_0x00756000(g);
}
} }
