// FUNCTION: BF2 0x8b2110
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b2110() {
    void* g = (void*)0x10eb620;
    *(void**)0x010eb620 = (void*)0xbdc8b0;
    fn_0x00756000(g);
}
} }
