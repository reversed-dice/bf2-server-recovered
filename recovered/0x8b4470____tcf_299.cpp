// FUNCTION: BF2 0x8b4470
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b4470() {
    void* g = (void*)0x10de580;
    *(void**)0x010de580 = (void*)0xbef550;
    fn_0x00756000(g);
}
} }
