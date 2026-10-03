// FUNCTION: BF2 0x8b5810
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b5810() {
    void* g = (void*)0x10d2be0;
    *(void**)0x010d2be0 = (void*)0xc00170;
    fn_0x00756000(g);
}
} }
