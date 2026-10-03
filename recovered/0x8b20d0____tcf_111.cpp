// FUNCTION: BF2 0x8b20d0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b20d0() {
    void* g = (void*)0x10eb980;
    *(void**)0x010eb980 = (void*)0xbdc3d0;
    fn_0x00756000(g);
}
} }
