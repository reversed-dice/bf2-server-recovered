// FUNCTION: BF2 0x850a70
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_850a70() {
    void* g = (void*)0x10b42a0;
    *(void**)0x010b42a0 = (void*)0xbc0530;
    fn_0x00756000(g);
}
} }
