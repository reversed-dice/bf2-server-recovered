// FUNCTION: BF2 0x8b4d90
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b4d90() {
    void* g = (void*)0x10d9240;
    *(void**)0x010d9240 = (void*)0xbf6d90;
    fn_0x00756000(g);
}
} }
