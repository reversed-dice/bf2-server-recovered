// FUNCTION: BF2 0x8b4150
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b4150() {
    void* g = (void*)0x10e03e0;
    *(void**)0x010e03e0 = (void*)0xbec970;
    fn_0x00756000(g);
}
} }
