// FUNCTION: BF2 0x8b2e50
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b2e50() {
    void* g = (void*)0x10cbc80;
    *(void**)0x010cbc80 = (void*)0xc0a250;
    fn_0x00756000(g);
}
} }
