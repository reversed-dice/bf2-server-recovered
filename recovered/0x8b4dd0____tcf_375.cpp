// FUNCTION: BF2 0x8b4dd0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b4dd0() {
    void* g = (void*)0x10d9000;
    *(void**)0x010d9000 = (void*)0xbf70d0;
    fn_0x00756000(g);
}
} }
