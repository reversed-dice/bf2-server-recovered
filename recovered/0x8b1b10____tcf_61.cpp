// FUNCTION: BF2 0x8b1b10
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b1b10() {
    void* g = (void*)0x10ef1c0;
    *(void**)0x010ef1c0 = (void*)0xbd7290;
    fn_0x00756000(g);
}
} }
