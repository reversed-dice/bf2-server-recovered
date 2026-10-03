// FUNCTION: BF2 0x850bf0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_850bf0() {
    void* g = (void*)0x10b4960;
    *(void**)0x010b4960 = (void*)0xbbfb70;
    fn_0x00756000(g);
}
} }
