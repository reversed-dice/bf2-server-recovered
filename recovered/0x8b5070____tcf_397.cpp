// FUNCTION: BF2 0x8b5070
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b5070() {
    void* g = (void*)0x10d7740;
    *(void**)0x010d7740 = (void*)0xbf9490;
    fn_0x00756000(g);
}
} }
