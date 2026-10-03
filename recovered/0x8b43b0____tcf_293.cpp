// FUNCTION: BF2 0x8b43b0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b43b0() {
    void* g = (void*)0x10dec40;
    *(void**)0x010dec40 = (void*)0xbeeb90;
    fn_0x00756000(g);
}
} }
