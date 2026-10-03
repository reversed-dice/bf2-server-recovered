// FUNCTION: BF2 0x8b50b0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b50b0() {
    void* g = (void*)0x10d73e0;
    *(void**)0x010d73e0 = (void*)0xbf9970;
    fn_0x00756000(g);
}
} }
