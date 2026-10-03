// FUNCTION: BF2 0x850cd0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_850cd0() {
    void* g = (void*)0x10b6b20;
    *(void**)0x010b6b20 = (void*)0xbbcab0;
    fn_0x00756000(g);
}
} }
