// FUNCTION: BF2 0x8b1bd0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b1bd0() {
    void* g = (void*)0x10eeb00;
    *(void**)0x010eeb00 = (void*)0xbd7c50;
    fn_0x00756000(g);
}
} }
