// FUNCTION: BF2 0x8731d0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8731d0() {
    void* g = (void*)0x10b99c0;
    *(void**)0x010b99c0 = (void*)0xbcba10;
    fn_0x00756000(g);
}
} }
