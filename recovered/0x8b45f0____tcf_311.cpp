// FUNCTION: BF2 0x8b45f0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b45f0() {
    void* g = (void*)0x10dd800;
    *(void**)0x010dd800 = (void*)0xbf08d0;
    fn_0x00756000(g);
}
} }
