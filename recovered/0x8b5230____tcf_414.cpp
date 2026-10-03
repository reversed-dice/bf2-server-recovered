// FUNCTION: BF2 0x8b5230
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b5230() {
    void* g = (void*)0x10d6420;
    *(void**)0x010d6420 = (void*)0xbfb030;
    fn_0x00756000(g);
}
} }
