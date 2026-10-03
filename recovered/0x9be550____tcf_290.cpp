// FUNCTION: BF2 0x9be550
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_9be550() {
    void* g = (void*)0x1100940;
    *(void**)0x01100940 = (void*)0xc48c70;
    fn_0x00756000(g);
}
} }
