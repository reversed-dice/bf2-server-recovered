// FUNCTION: BF2 0x8b5010
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b5010() {
    void* g = (void*)0x10d7aa0;
    *(void**)0x010d7aa0 = (void*)0xbf8fb0;
    fn_0x00756000(g);
}
} }
