// FUNCTION: BF2 0x8b5e30
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b5e30() {
    void* g = (void*)0x10cf280;
    *(void**)0x010cf280 = (void*)0xc05450;
    fn_0x00756000(g);
}
} }
