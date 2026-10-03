// FUNCTION: BF2 0x8b1c30
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b1c30() {
    void* g = (void*)0x10ee7a0;
    *(void**)0x010ee7a0 = (void*)0xbd8130;
    fn_0x00756000(g);
}
} }
