// FUNCTION: BF2 0x8b5350
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b5350() {
    void* g = (void*)0x10d5a00;
    *(void**)0x010d5a00 = (void*)0xbfbed0;
    fn_0x00756000(g);
}
} }
