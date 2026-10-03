// FUNCTION: BF2 0x8b1cd0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b1cd0() {
    void* g = (void*)0x10ee0e0;
    *(void**)0x010ee0e0 = (void*)0xbd8af0;
    fn_0x00756000(g);
}
} }
