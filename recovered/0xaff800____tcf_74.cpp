// FUNCTION: BF2 0xaff800
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_aff800() {
    void* g = (void*)0x1147340;
    *(void**)0x01147340 = (void*)0xc9c4f0;
    fn_0x00756000(g);
}
} }
