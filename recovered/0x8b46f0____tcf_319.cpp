// FUNCTION: BF2 0x8b46f0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b46f0() {
    void* g = (void*)0x10dcf00;
    *(void**)0x010dcf00 = (void*)0xbf15d0;
    fn_0x00756000(g);
}
} }
