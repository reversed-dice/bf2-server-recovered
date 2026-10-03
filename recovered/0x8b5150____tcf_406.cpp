// FUNCTION: BF2 0x8b5150
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b5150() {
    void* g = (void*)0x10d6d20;
    *(void**)0x010d6d20 = (void*)0xbfa330;
    fn_0x00756000(g);
}
} }
