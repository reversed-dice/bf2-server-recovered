// FUNCTION: BF2 0x8b3610
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b3610() {
    void* g = (void*)0x10e6bc0;
    *(void**)0x010e6bc0 = (void*)0xbe33f0;
    fn_0x00756000(g);
}
} }
