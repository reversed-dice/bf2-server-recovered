// FUNCTION: BF2 0x8a0cf0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8a0cf0() {
    void* g = (void*)0x10c3000;
    *(void**)0x010c3000 = (void*)0xbd1c50;
    fn_0x00756000(g);
}
} }
