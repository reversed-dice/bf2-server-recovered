// FUNCTION: BF2 0x850a50
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_850a50() {
    void* g = (void*)0x10b4060;
    *(void**)0x010b4060 = (void*)0xbc0870;
    fn_0x00756000(g);
}
} }
