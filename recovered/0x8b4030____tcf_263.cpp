// FUNCTION: BF2 0x8b4030
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b4030() {
    void* g = (void*)0x10e0e20;
    *(void**)0x010e0e20 = (void*)0xbebad0;
    fn_0x00756000(g);
}
} }
