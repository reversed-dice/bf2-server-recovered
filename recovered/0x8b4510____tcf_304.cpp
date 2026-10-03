// FUNCTION: BF2 0x8b4510
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b4510() {
    void* g = (void*)0x10ddfe0;
    *(void**)0x010ddfe0 = (void*)0xbefd70;
    fn_0x00756000(g);
}
} }
