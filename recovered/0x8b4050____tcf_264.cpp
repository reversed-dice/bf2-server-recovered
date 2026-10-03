// FUNCTION: BF2 0x8b4050
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b4050() {
    void* g = (void*)0x10e0ce0;
    *(void**)0x010e0ce0 = (void*)0xbebc70;
    fn_0x00756000(g);
}
} }
