// FUNCTION: BF2 0x8b4e10
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b4e10() {
    void* g = (void*)0x10d8dc0;
    *(void**)0x010d8dc0 = (void*)0xbf7410;
    fn_0x00756000(g);
}
} }
