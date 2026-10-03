// FUNCTION: BF2 0x8b5170
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b5170() {
    void* g = (void*)0x10d6c00;
    *(void**)0x010d6c00 = (void*)0xbfa4d0;
    fn_0x00756000(g);
}
} }
