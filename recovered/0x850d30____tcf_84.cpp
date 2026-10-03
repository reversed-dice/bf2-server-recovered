// FUNCTION: BF2 0x850d30
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_850d30() {
    void* g = (void*)0x10b67c0;
    *(void**)0x010b67c0 = (void*)0xbbcf90;
    fn_0x00756000(g);
}
} }
