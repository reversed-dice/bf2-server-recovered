// FUNCTION: BF2 0x8b5610
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b5610() {
    void* g = (void*)0x10d4020;
    *(void**)0x010d4020 = (void*)0xbfe430;
    fn_0x00756000(g);
}
} }
