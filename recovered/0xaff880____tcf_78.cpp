// FUNCTION: BF2 0xaff880
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_aff880() {
    void* g = (void*)0x1146ec0;
    *(void**)0x01146ec0 = (void*)0xc9cb70;
    fn_0x00756000(g);
}
} }
