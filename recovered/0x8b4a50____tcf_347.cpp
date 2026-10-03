// FUNCTION: BF2 0x8b4a50
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b4a50() {
    void* g = (void*)0x10daf80;
    *(void**)0x010daf80 = (void*)0xbf4350;
    fn_0x00756000(g);
}
} }
