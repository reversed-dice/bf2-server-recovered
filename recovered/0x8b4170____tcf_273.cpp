// FUNCTION: BF2 0x8b4170
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b4170() {
    void* g = (void*)0x10e02c0;
    *(void**)0x010e02c0 = (void*)0xbecb10;
    fn_0x00756000(g);
}
} }
