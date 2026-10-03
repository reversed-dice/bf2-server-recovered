// FUNCTION: BF2 0xaff040
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_aff040() {
    void* g = (void*)0x1149e00;
    *(void**)0x01149e00 = (void*)0xc98730;
    fn_0x00756000(g);
}
} }
