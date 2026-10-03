// FUNCTION: BF2 0xaff000
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_aff000() {
    void* g = (void*)0x114a040;
    *(void**)0x0114a040 = (void*)0xc983f0;
    fn_0x00756000(g);
}
} }
