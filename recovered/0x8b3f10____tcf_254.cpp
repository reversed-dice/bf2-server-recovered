// FUNCTION: BF2 0x8b3f10
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b3f10() {
    void* g = (void*)0x10e1840;
    *(void**)0x010e1840 = (void*)0xbeac30;
    fn_0x00756000(g);
}
} }
