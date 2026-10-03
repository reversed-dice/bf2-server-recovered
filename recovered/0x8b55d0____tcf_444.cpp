// FUNCTION: BF2 0x8b55d0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b55d0() {
    void* g = (void*)0x10d4260;
    *(void**)0x010d4260 = (void*)0xbfe0f0;
    fn_0x00756000(g);
}
} }
