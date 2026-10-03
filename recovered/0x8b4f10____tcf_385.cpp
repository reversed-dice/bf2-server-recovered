// FUNCTION: BF2 0x8b4f10
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b4f10() {
    void* g = (void*)0x10d84c0;
    *(void**)0x010d84c0 = (void*)0xbf8110;
    fn_0x00756000(g);
}
} }
