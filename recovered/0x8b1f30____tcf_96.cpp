// FUNCTION: BF2 0x8b1f30
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b1f30() {
    void* g = (void*)0x10eca60;
    *(void**)0x010eca60 = (void*)0xbdab70;
    fn_0x00756000(g);
}
} }
