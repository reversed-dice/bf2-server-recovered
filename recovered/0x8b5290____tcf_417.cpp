// FUNCTION: BF2 0x8b5290
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b5290() {
    void* g = (void*)0x10d60c0;
    *(void**)0x010d60c0 = (void*)0xbfb510;
    fn_0x00756000(g);
}
} }
