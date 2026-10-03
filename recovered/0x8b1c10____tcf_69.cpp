// FUNCTION: BF2 0x8b1c10
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b1c10() {
    void* g = (void*)0x10ee8c0;
    *(void**)0x010ee8c0 = (void*)0xbd7f90;
    fn_0x00756000(g);
}
} }
