// FUNCTION: BF2 0x8b4fb0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b4fb0() {
    void* g = (void*)0x10d7e00;
    *(void**)0x010d7e00 = (void*)0xbf8ad0;
    fn_0x00756000(g);
}
} }
