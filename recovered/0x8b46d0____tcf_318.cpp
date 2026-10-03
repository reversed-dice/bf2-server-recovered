// FUNCTION: BF2 0x8b46d0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b46d0() {
    void* g = (void*)0x10dd020;
    *(void**)0x010dd020 = (void*)0xbf1430;
    fn_0x00756000(g);
}
} }
