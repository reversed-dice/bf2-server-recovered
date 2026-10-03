// FUNCTION: BF2 0x850b90
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_850b90() {
    void* g = (void*)0x10b4cc0;
    *(void**)0x010b4cc0 = (void*)0xbbf690;
    fn_0x00756000(g);
}
} }
