// FUNCTION: BF2 0x8b3130
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b3130() {
    void* g = (void*)0x10ca180;
    *(void**)0x010ca180 = (void*)0xc0c950;
    fn_0x00756000(g);
}
} }
