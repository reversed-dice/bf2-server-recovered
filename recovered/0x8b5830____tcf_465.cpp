// FUNCTION: BF2 0x8b5830
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b5830() {
    void* g = (void*)0x10d2ac0;
    *(void**)0x010d2ac0 = (void*)0xc00310;
    fn_0x00756000(g);
}
} }
