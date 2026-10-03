// FUNCTION: BF2 0x8b5370
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b5370() {
    void* g = (void*)0x10d57c0;
    *(void**)0x010d57c0 = (void*)0xbfc210;
    fn_0x00756000(g);
}
} }
