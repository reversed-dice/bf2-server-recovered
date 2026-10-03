// FUNCTION: BF2 0x8b3c90
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b3c90() {
    void* g = (void*)0x10e3100;
    *(void**)0x010e3100 = (void*)0xbe8870;
    fn_0x00756000(g);
}
} }
