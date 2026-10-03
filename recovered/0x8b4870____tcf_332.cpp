// FUNCTION: BF2 0x8b4870
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b4870() {
    void* g = (void*)0x10dc060;
    *(void**)0x010dc060 = (void*)0xbf2af0;
    fn_0x00756000(g);
}
} }
