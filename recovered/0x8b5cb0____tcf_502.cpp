// FUNCTION: BF2 0x8b5cb0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b5cb0() {
    void* g = (void*)0x10d0120;
    *(void**)0x010d0120 = (void*)0xc03f30;
    fn_0x00756000(g);
}
} }
