// FUNCTION: BF2 0x850ad0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_850ad0() {
    void* g = (void*)0x10b4600;
    *(void**)0x010b4600 = (void*)0xbc0050;
    fn_0x00756000(g);
}
} }
