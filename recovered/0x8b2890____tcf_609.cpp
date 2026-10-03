// FUNCTION: BF2 0x8b2890
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b2890() {
    void* g = (void*)0x10c88c0;
    *(void**)0x010c88c0 = (void*)0xc0ed10;
    fn_0x00756000(g);
}
} }
