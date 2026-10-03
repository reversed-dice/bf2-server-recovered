// FUNCTION: BF2 0xaa3500
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_aa3500() {
    void* g = (void*)0x1130060;
    *(void**)0x01130060 = (void*)0xc7af10;
    fn_0x00756000(g);
}
} }
