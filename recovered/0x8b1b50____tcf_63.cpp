// FUNCTION: BF2 0x8b1b50
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b1b50() {
    void* g = (void*)0x10eef80;
    *(void**)0x010eef80 = (void*)0xbd75d0;
    fn_0x00756000(g);
}
} }
