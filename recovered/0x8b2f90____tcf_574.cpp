// FUNCTION: BF2 0x8b2f90
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b2f90() {
    void* g = (void*)0x10cb020;
    *(void**)0x010cb020 = (void*)0xc0b430;
    fn_0x00756000(g);
}
} }
