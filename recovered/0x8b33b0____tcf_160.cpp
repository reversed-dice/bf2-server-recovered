// FUNCTION: BF2 0x8b33b0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b33b0() {
    void* g = (void*)0x10e8240;
    *(void**)0x010e8240 = (void*)0xbe1370;
    fn_0x00756000(g);
}
} }
