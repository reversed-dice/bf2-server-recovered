// FUNCTION: BF2 0x8b3890
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b3890() {
    void* g = (void*)0x10e5540;
    *(void**)0x010e5540 = (void*)0xbe5470;
    fn_0x00756000(g);
}
} }
