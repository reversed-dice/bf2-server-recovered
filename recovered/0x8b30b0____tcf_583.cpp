// FUNCTION: BF2 0x8b30b0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b30b0() {
    void* g = (void*)0x10ca600;
    *(void**)0x010ca600 = (void*)0xc0c2d0;
    fn_0x00756000(g);
}
} }
