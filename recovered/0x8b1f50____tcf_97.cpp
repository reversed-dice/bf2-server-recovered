// FUNCTION: BF2 0x8b1f50
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b1f50() {
    void* g = (void*)0x10ec940;
    *(void**)0x010ec940 = (void*)0xbdad10;
    fn_0x00756000(g);
}
} }
