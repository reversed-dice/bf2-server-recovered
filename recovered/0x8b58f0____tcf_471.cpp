// FUNCTION: BF2 0x8b58f0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b58f0() {
    void* g = (void*)0x10d2400;
    *(void**)0x010d2400 = (void*)0xc00cd0;
    fn_0x00756000(g);
}
} }
