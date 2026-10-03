// FUNCTION: BF2 0x8b37d0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b37d0() {
    void* g = (void*)0x10e5c00;
    *(void**)0x010e5c00 = (void*)0xbe4ab0;
    fn_0x00756000(g);
}
} }
