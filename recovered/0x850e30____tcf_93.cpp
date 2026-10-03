// FUNCTION: BF2 0x850e30
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_850e30() {
    void* g = (void*)0x10b5da0;
    *(void**)0x010b5da0 = (void*)0xbbde30;
    fn_0x00756000(g);
}
} }
