// FUNCTION: BF2 0x8b1e10
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b1e10() {
    void* g = (void*)0x10ed480;
    *(void**)0x010ed480 = (void*)0xbd9cd0;
    fn_0x00756000(g);
}
} }
