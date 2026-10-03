// FUNCTION: BF2 0xa31000
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_a31000() {
    void* g = (void*)0x111e280;
    *(void**)0x0111e280 = (void*)0xc55930;
    fn_0x00756000(g);
}
} }
