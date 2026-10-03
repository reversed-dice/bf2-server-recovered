// FUNCTION: BF2 0x850a10
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_850a10() {
    void* g = (void*)0x10b82c0;
    *(void**)0x010b82c0 = (void*)0xbba890;
    fn_0x00756000(g);
}
} }
