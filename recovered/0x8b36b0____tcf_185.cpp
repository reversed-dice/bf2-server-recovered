// FUNCTION: BF2 0x8b36b0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b36b0() {
    void* g = (void*)0x10e6620;
    *(void**)0x010e6620 = (void*)0xbe3c10;
    fn_0x00756000(g);
}
} }
