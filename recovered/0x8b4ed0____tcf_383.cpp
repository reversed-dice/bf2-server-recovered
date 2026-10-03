// FUNCTION: BF2 0x8b4ed0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b4ed0() {
    void* g = (void*)0x10d8700;
    *(void**)0x010d8700 = (void*)0xbf7dd0;
    fn_0x00756000(g);
}
} }
