// FUNCTION: BF2 0x8b4f50
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b4f50() {
    void* g = (void*)0x10d8280;
    *(void**)0x010d8280 = (void*)0xbf8450;
    fn_0x00756000(g);
}
} }
