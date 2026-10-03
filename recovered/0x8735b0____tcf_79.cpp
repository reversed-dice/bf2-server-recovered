// FUNCTION: BF2 0x8735b0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8735b0() {
    void* g = (void*)0x10bdf80;
    *(void**)0x010bdf80 = (void*)0xbc5550;
    fn_0x00756000(g);
}
} }
