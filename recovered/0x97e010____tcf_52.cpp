// FUNCTION: BF2 0x97e010
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_97e010() {
    void* g = (void*)0x10fb900;
    *(void**)0x010fb900 = (void*)0xc1a110;
    fn_0x00756000(g);
}
} }
