// FUNCTION: BF2 0x8b43d0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b43d0() {
    void* g = (void*)0x10deb20;
    *(void**)0x010deb20 = (void*)0xbeed30;
    fn_0x00756000(g);
}
} }
