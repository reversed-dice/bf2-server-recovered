// FUNCTION: BF2 0x8b5970
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b5970() {
    void* g = (void*)0x10d1f80;
    *(void**)0x010d1f80 = (void*)0xc01350;
    fn_0x00756000(g);
}
} }
