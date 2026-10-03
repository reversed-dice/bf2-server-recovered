// FUNCTION: BF2 0x8b45d0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b45d0() {
    void* g = (void*)0x10dd920;
    *(void**)0x010dd920 = (void*)0xbf0730;
    fn_0x00756000(g);
}
} }
