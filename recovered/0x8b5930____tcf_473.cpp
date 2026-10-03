// FUNCTION: BF2 0x8b5930
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b5930() {
    void* g = (void*)0x10d21c0;
    *(void**)0x010d21c0 = (void*)0xc01010;
    fn_0x00756000(g);
}
} }
