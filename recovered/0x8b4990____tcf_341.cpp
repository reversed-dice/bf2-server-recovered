// FUNCTION: BF2 0x8b4990
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b4990() {
    void* g = (void*)0x10db640;
    *(void**)0x010db640 = (void*)0xbf3990;
    fn_0x00756000(g);
}
} }
