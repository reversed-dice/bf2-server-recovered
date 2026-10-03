// FUNCTION: BF2 0x8b2930
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b2930() {
    void* g = (void*)0x10c7fc0;
    *(void**)0x010c7fc0 = (void*)0xc0fa10;
    fn_0x00756000(g);
}
} }
