// FUNCTION: BF2 0x8b1f10
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b1f10() {
    void* g = (void*)0x10ecb80;
    *(void**)0x010ecb80 = (void*)0xbda9d0;
    fn_0x00756000(g);
}
} }
