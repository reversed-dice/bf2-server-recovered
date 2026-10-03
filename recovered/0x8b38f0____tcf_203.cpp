// FUNCTION: BF2 0x8b38f0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b38f0() {
    void* g = (void*)0x10e51e0;
    *(void**)0x010e51e0 = (void*)0xbe5950;
    fn_0x00756000(g);
}
} }
