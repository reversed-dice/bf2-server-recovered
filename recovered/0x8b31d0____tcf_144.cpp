// FUNCTION: BF2 0x8b31d0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b31d0() {
    void* g = (void*)0x10e9440;
    *(void**)0x010e9440 = (void*)0xbdf970;
    fn_0x00756000(g);
}
} }
