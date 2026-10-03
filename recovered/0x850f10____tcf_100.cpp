// FUNCTION: BF2 0x850f10
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_850f10() {
    void* g = (void*)0x10b55c0;
    *(void**)0x010b55c0 = (void*)0xbbe990;
    fn_0x00756000(g);
}
} }
