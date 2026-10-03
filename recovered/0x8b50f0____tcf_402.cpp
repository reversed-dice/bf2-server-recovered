// FUNCTION: BF2 0x8b50f0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b50f0() {
    void* g = (void*)0x10d71a0;
    *(void**)0x010d71a0 = (void*)0xbf9cb0;
    fn_0x00756000(g);
}
} }
