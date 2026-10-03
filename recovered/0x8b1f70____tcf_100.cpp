// FUNCTION: BF2 0x8b1f70
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b1f70() {
    void* g = (void*)0x10ec5e0;
    *(void**)0x010ec5e0 = (void*)0xbdb1f0;
    fn_0x00756000(g);
}
} }
