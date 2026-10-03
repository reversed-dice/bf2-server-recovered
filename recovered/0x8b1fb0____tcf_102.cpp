// FUNCTION: BF2 0x8b1fb0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b1fb0() {
    void* g = (void*)0x10ec3a0;
    *(void**)0x010ec3a0 = (void*)0xbdb530;
    fn_0x00756000(g);
}
} }
