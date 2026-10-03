// FUNCTION: BF2 0x8b5a10
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b5a10() {
    void* g = (void*)0x10d18c0;
    *(void**)0x010d18c0 = (void*)0xc01d10;
    fn_0x00756000(g);
}
} }
