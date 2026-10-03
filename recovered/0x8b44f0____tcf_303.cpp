// FUNCTION: BF2 0x8b44f0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b44f0() {
    void* g = (void*)0x10de100;
    *(void**)0x010de100 = (void*)0xbefbd0;
    fn_0x00756000(g);
}
} }
