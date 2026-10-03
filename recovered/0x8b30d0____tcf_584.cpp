// FUNCTION: BF2 0x8b30d0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b30d0() {
    void* g = (void*)0x10ca4e0;
    *(void**)0x010ca4e0 = (void*)0xc0c470;
    fn_0x00756000(g);
}
} }
