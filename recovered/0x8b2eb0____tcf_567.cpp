// FUNCTION: BF2 0x8b2eb0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b2eb0() {
    void* g = (void*)0x10cb800;
    *(void**)0x010cb800 = (void*)0xc0a8d0;
    fn_0x00756000(g);
}
} }
