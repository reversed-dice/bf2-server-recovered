// FUNCTION: BF2 0x8b5330
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b5330() {
    void* g = (void*)0x10d5b20;
    *(void**)0x010d5b20 = (void*)0xbfbd30;
    fn_0x00756000(g);
}
} }
