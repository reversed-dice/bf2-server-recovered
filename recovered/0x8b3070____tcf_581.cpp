// FUNCTION: BF2 0x8b3070
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b3070() {
    void* g = (void*)0x10ca840;
    *(void**)0x010ca840 = (void*)0xc0bf90;
    fn_0x00756000(g);
}
} }
