// FUNCTION: BF2 0x8b2ff0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b2ff0() {
    void* g = (void*)0x10cacc0;
    *(void**)0x010cacc0 = (void*)0xc0b910;
    fn_0x00756000(g);
}
} }
