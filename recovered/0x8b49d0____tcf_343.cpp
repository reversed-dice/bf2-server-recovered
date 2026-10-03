// FUNCTION: BF2 0x8b49d0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b49d0() {
    void* g = (void*)0x10db400;
    *(void**)0x010db400 = (void*)0xbf3cd0;
    fn_0x00756000(g);
}
} }
