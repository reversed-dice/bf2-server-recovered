// FUNCTION: BF2 0x8b21b0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b21b0() {
    void* g = (void*)0x10eb080;
    *(void**)0x010eb080 = (void*)0xbdd0d0;
    fn_0x00756000(g);
}
} }
