// FUNCTION: BF2 0x850f70
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_850f70() {
    void* g = (void*)0x10b5260;
    *(void**)0x010b5260 = (void*)0xbbee70;
    fn_0x00756000(g);
}
} }
