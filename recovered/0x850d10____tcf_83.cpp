// FUNCTION: BF2 0x850d10
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_850d10() {
    void* g = (void*)0x10b68e0;
    *(void**)0x010b68e0 = (void*)0xbbcdf0;
    fn_0x00756000(g);
}
} }
