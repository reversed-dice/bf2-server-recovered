// FUNCTION: BF2 0x8a0b50
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8a0b50() {
    void* g = (void*)0x10c2820;
    *(void**)0x010c2820 = (void*)0xbd2890;
    fn_0x00756000(g);
}
} }
