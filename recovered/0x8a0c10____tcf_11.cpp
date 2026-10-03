// FUNCTION: BF2 0x8a0c10
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8a0c10() {
    void* g = (void*)0x10c37e0;
    *(void**)0x010c37e0 = (void*)0xbd1010;
    fn_0x00756000(g);
}
} }
