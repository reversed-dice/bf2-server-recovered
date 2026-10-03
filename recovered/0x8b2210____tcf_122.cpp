// FUNCTION: BF2 0x8b2210
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b2210() {
    void* g = (void*)0x10ead00;
    *(void**)0x010ead00 = (void*)0xbdd5b0;
    fn_0x00756000(g);
}
} }
