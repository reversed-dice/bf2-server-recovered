// FUNCTION: BF2 0x8a0d10
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8a0d10() {
    void* g = (void*)0x10c2ee0;
    *(void**)0x010c2ee0 = (void*)0xbd1e10;
    fn_0x00756000(g);
}
} }
