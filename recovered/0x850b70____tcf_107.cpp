// FUNCTION: BF2 0x850b70
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_850b70() {
    void* g = (void*)0x10b4de0;
    *(void**)0x010b4de0 = (void*)0xbbf4f0;
    fn_0x00756000(g);
}
} }
