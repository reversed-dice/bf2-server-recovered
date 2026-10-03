// FUNCTION: BF2 0x850b50
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_850b50() {
    void* g = (void*)0x10b4f00;
    *(void**)0x010b4f00 = (void*)0xbbf350;
    fn_0x00756000(g);
}
} }
