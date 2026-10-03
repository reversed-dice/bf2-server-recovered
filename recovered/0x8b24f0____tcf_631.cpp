// FUNCTION: BF2 0x8b24f0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b24f0() {
    void* g = (void*)0x10c7000;
    *(void**)0x010c7000 = (void*)0xc110d0;
    fn_0x00756000(g);
}
} }
