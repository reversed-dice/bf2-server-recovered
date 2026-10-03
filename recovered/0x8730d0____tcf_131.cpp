// FUNCTION: BF2 0x8730d0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8730d0() {
    void* g = (void*)0x10ba500;
    *(void**)0x010ba500 = (void*)0xbca9d0;
    fn_0x00756000(g);
}
} }
