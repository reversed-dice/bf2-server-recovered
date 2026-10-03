// FUNCTION: BF2 0x850cf0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_850cf0() {
    void* g = (void*)0x10b6a00;
    *(void**)0x010b6a00 = (void*)0xbbcc50;
    fn_0x00756000(g);
}
} }
