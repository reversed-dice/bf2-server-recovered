// FUNCTION: BF2 0x8b20b0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b20b0() {
    void* g = (void*)0x10ebaa0;
    *(void**)0x010ebaa0 = (void*)0xbdc230;
    fn_0x00756000(g);
}
} }
