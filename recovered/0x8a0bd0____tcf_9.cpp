// FUNCTION: BF2 0x8a0bd0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8a0bd0() {
    void* g = (void*)0x10c3a20;
    *(void**)0x010c3a20 = (void*)0xbd0c90;
    fn_0x00756000(g);
}
} }
