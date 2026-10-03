// FUNCTION: BF2 0x8b2550
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b2550() {
    void* g = (void*)0x10c7a20;
    *(void**)0x010c7a20 = (void*)0xc10230;
    fn_0x00756000(g);
}
} }
