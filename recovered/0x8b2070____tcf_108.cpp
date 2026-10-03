// FUNCTION: BF2 0x8b2070
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b2070() {
    void* g = (void*)0x10ebce0;
    *(void**)0x010ebce0 = (void*)0xbdbef0;
    fn_0x00756000(g);
}
} }
