// FUNCTION: BF2 0x8b4ff0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b4ff0() {
    void* g = (void*)0x10d7bc0;
    *(void**)0x010d7bc0 = (void*)0xbf8e10;
    fn_0x00756000(g);
}
} }
