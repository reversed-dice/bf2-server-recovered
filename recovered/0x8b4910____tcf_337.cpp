// FUNCTION: BF2 0x8b4910
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b4910() {
    void* g = (void*)0x10dbac0;
    *(void**)0x010dbac0 = (void*)0xbf3310;
    fn_0x00756000(g);
}
} }
