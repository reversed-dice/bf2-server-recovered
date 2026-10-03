// FUNCTION: BF2 0x8b24b0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b24b0() {
    void* g = (void*)0x10c6b80;
    *(void**)0x010c6b80 = (void*)0xc11750;
    fn_0x00756000(g);
}
} }
