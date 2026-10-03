// FUNCTION: BF2 0x850bb0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_850bb0() {
    void* g = (void*)0x10b4ba0;
    *(void**)0x010b4ba0 = (void*)0xbbf830;
    fn_0x00756000(g);
}
} }
