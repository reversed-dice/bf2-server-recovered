// FUNCTION: BF2 0x8b1cb0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b1cb0() {
    void* g = (void*)0x10ee200;
    *(void**)0x010ee200 = (void*)0xbd8950;
    fn_0x00756000(g);
}
} }
