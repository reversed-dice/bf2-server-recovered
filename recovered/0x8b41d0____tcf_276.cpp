// FUNCTION: BF2 0x8b41d0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b41d0() {
    void* g = (void*)0x10dff60;
    *(void**)0x010dff60 = (void*)0xbecff0;
    fn_0x00756000(g);
}
} }
