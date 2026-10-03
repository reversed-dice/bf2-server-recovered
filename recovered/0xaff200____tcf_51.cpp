// FUNCTION: BF2 0xaff200
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_aff200() {
    void* g = (void*)0x1148d20;
    *(void**)0x01148d20 = (void*)0xc99f90;
    fn_0x00756000(g);
}
} }
