// FUNCTION: BF2 0x8b34b0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b34b0() {
    void* g = (void*)0x10e7940;
    *(void**)0x010e7940 = (void*)0xbe2070;
    fn_0x00756000(g);
}
} }
