// FUNCTION: BF2 0x8b3d90
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b3d90() {
    void* g = (void*)0x10e2800;
    *(void**)0x010e2800 = (void*)0xbe9570;
    fn_0x00756000(g);
}
} }
