// FUNCTION: BF2 0x8b4130
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b4130() {
    void* g = (void*)0x10e0500;
    *(void**)0x010e0500 = (void*)0xbec7d0;
    fn_0x00756000(g);
}
} }
