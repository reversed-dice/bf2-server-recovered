// FUNCTION: BF2 0x8b44d0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b44d0() {
    void* g = (void*)0x10de220;
    *(void**)0x010de220 = (void*)0xbefa30;
    fn_0x00756000(g);
}
} }
