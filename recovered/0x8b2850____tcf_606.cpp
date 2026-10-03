// FUNCTION: BF2 0x8b2850
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b2850() {
    void* g = (void*)0x10c8c20;
    *(void**)0x010c8c20 = (void*)0xc0e830;
    fn_0x00756000(g);
}
} }
