// FUNCTION: BF2 0x8b44b0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b44b0() {
    void* g = (void*)0x10de340;
    *(void**)0x010de340 = (void*)0xbef890;
    fn_0x00756000(g);
}
} }
