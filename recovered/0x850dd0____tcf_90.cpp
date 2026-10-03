// FUNCTION: BF2 0x850dd0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_850dd0() {
    void* g = (void*)0x10b6100;
    *(void**)0x010b6100 = (void*)0xbbd950;
    fn_0x00756000(g);
}
} }
