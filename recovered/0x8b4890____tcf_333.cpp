// FUNCTION: BF2 0x8b4890
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b4890() {
    void* g = (void*)0x10dbf40;
    *(void**)0x010dbf40 = (void*)0xbf2c90;
    fn_0x00756000(g);
}
} }
