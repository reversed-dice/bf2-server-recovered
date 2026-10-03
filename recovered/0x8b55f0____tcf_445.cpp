// FUNCTION: BF2 0x8b55f0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b55f0() {
    void* g = (void*)0x10d4140;
    *(void**)0x010d4140 = (void*)0xbfe290;
    fn_0x00756000(g);
}
} }
