// FUNCTION: BF2 0x8b4090
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b4090() {
    void* g = (void*)0x10e0aa0;
    *(void**)0x010e0aa0 = (void*)0xbebfb0;
    fn_0x00756000(g);
}
} }
