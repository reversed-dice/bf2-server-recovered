// FUNCTION: BF2 0x850af0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_850af0() {
    void* g = (void*)0x10b44e0;
    *(void**)0x010b44e0 = (void*)0xbc01f0;
    fn_0x00756000(g);
}
} }
