// FUNCTION: BF2 0x8b1f90
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b1f90() {
    void* g = (void*)0x10ec4c0;
    *(void**)0x010ec4c0 = (void*)0xbdb390;
    fn_0x00756000(g);
}
} }
