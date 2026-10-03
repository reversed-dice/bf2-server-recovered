// FUNCTION: BF2 0x8b2430
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b2430() {
    void* g = (void*)0x10e99e0;
    *(void**)0x010e99e0 = (void*)0xbdf150;
    fn_0x00756000(g);
}
} }
