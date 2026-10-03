// FUNCTION: BF2 0x8a0bf0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8a0bf0() {
    void* g = (void*)0x10c3900;
    *(void**)0x010c3900 = (void*)0xbd0e50;
    fn_0x00756000(g);
}
} }
