// FUNCTION: BF2 0x8b1d30
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b1d30() {
    void* g = (void*)0x10edd80;
    *(void**)0x010edd80 = (void*)0xbd8fd0;
    fn_0x00756000(g);
}
} }
