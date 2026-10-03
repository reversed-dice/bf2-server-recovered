// FUNCTION: BF2 0x850c30
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_850c30() {
    void* g = (void*)0x10b70c0;
    *(void**)0x010b70c0 = (void*)0xbbc290;
    fn_0x00756000(g);
}
} }
