// FUNCTION: BF2 0x8b3d30
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b3d30() {
    void* g = (void*)0x10e2b60;
    *(void**)0x010e2b60 = (void*)0xbe9090;
    fn_0x00756000(g);
}
} }
