// FUNCTION: BF2 0x8b33f0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b33f0() {
    void* g = (void*)0x10e8000;
    *(void**)0x010e8000 = (void*)0xbe16b0;
    fn_0x00756000(g);
}
} }
