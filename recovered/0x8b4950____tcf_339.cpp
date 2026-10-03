// FUNCTION: BF2 0x8b4950
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b4950() {
    void* g = (void*)0x10db880;
    *(void**)0x010db880 = (void*)0xbf3650;
    fn_0x00756000(g);
}
} }
