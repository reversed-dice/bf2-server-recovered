// FUNCTION: BF2 0x8b1e70
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b1e70() {
    void* g = (void*)0x10ed120;
    *(void**)0x010ed120 = (void*)0xbda1b0;
    fn_0x00756000(g);
}
} }
