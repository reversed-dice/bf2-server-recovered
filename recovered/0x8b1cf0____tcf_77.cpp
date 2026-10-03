// FUNCTION: BF2 0x8b1cf0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b1cf0() {
    void* g = (void*)0x10edfc0;
    *(void**)0x010edfc0 = (void*)0xbd8c90;
    fn_0x00756000(g);
}
} }
