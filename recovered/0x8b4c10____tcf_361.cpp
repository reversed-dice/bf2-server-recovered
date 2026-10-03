// FUNCTION: BF2 0x8b4c10
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b4c10() {
    void* g = (void*)0x10d9fc0;
    *(void**)0x010d9fc0 = (void*)0xbf5a10;
    fn_0x00756000(g);
}
} }
