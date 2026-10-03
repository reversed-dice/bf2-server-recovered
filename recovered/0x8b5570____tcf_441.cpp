// FUNCTION: BF2 0x8b5570
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b5570() {
    void* g = (void*)0x10d45c0;
    *(void**)0x010d45c0 = (void*)0xbfdc10;
    fn_0x00756000(g);
}
} }
