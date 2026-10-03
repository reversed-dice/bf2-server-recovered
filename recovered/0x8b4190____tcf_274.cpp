// FUNCTION: BF2 0x8b4190
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b4190() {
    void* g = (void*)0x10e01a0;
    *(void**)0x010e01a0 = (void*)0xbeccb0;
    fn_0x00756000(g);
}
} }
