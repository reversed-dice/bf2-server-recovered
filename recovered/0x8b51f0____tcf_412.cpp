// FUNCTION: BF2 0x8b51f0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b51f0() {
    void* g = (void*)0x10d6660;
    *(void**)0x010d6660 = (void*)0xbfacf0;
    fn_0x00756000(g);
}
} }
