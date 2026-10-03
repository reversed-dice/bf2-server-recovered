// FUNCTION: BF2 0x8730b0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8730b0() {
    void* g = (void*)0x10ba620;
    *(void**)0x010ba620 = (void*)0xbca830;
    fn_0x00756000(g);
}
} }
