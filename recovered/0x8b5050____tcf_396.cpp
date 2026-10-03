// FUNCTION: BF2 0x8b5050
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b5050() {
    void* g = (void*)0x10d7860;
    *(void**)0x010d7860 = (void*)0xbf92f0;
    fn_0x00756000(g);
}
} }
