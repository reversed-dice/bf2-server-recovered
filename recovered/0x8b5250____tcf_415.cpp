// FUNCTION: BF2 0x8b5250
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b5250() {
    void* g = (void*)0x10d6300;
    *(void**)0x010d6300 = (void*)0xbfb1d0;
    fn_0x00756000(g);
}
} }
