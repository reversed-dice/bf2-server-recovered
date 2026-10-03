// FUNCTION: BF2 0x850b10
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_850b10() {
    void* g = (void*)0x10b43c0;
    *(void**)0x010b43c0 = (void*)0xbc0390;
    fn_0x00756000(g);
}
} }
