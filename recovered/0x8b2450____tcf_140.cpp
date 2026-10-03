// FUNCTION: BF2 0x8b2450
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b2450() {
    void* g = (void*)0x10e98c0;
    *(void**)0x010e98c0 = (void*)0xbdf2f0;
    fn_0x00756000(g);
}
} }
