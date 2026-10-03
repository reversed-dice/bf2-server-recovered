// FUNCTION: BF2 0x8b4810
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b4810() {
    void* g = (void*)0x10dc3c0;
    *(void**)0x010dc3c0 = (void*)0xbf2610;
    fn_0x00756000(g);
}
} }
