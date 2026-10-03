// FUNCTION: BF2 0x8b1a70
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b1a70() {
    void* g = (void*)0x10ef760;
    *(void**)0x010ef760 = (void*)0xbd6a70;
    fn_0x00756000(g);
}
} }
