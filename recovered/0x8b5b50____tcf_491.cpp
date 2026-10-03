// FUNCTION: BF2 0x8b5b50
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b5b50() {
    void* g = (void*)0x10d0d80;
    *(void**)0x010d0d80 = (void*)0xc02d50;
    fn_0x00756000(g);
}
} }
