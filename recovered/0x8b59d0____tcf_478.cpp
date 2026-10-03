// FUNCTION: BF2 0x8b59d0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b59d0() {
    void* g = (void*)0x10d1c20;
    *(void**)0x010d1c20 = (void*)0xc01830;
    fn_0x00756000(g);
}
} }
