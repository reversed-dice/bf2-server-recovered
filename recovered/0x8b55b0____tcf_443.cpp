// FUNCTION: BF2 0x8b55b0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b55b0() {
    void* g = (void*)0x10d4380;
    *(void**)0x010d4380 = (void*)0xbfdf50;
    fn_0x00756000(g);
}
} }
