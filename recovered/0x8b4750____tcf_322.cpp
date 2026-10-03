// FUNCTION: BF2 0x8b4750
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b4750() {
    void* g = (void*)0x10dcba0;
    *(void**)0x010dcba0 = (void*)0xbf1ab0;
    fn_0x00756000(g);
}
} }
