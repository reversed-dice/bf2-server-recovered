// FUNCTION: BF2 0xa31100
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_a31100() {
    void* g = (void*)0x111d620;
    *(void**)0x0111d620 = (void*)0xc56c70;
    fn_0x00756000(g);
}
} }
