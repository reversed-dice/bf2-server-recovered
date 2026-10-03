// FUNCTION: BF2 0x8b52d0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b52d0() {
    void* g = (void*)0x10d5e80;
    *(void**)0x010d5e80 = (void*)0xbfb850;
    fn_0x00756000(g);
}
} }
