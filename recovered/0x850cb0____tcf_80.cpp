// FUNCTION: BF2 0x850cb0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_850cb0() {
    void* g = (void*)0x10b6c40;
    *(void**)0x010b6c40 = (void*)0xbbc910;
    fn_0x00756000(g);
}
} }
