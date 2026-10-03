// FUNCTION: BF2 0x8b30f0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b30f0() {
    void* g = (void*)0x10ca3c0;
    *(void**)0x010ca3c0 = (void*)0xc0c610;
    fn_0x00756000(g);
}
} }
