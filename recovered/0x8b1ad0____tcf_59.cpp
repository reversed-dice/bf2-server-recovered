// FUNCTION: BF2 0x8b1ad0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b1ad0() {
    void* g = (void*)0x10ef400;
    *(void**)0x010ef400 = (void*)0xbd6f50;
    fn_0x00756000(g);
}
} }
