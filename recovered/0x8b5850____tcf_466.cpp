// FUNCTION: BF2 0x8b5850
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b5850() {
    void* g = (void*)0x10d29a0;
    *(void**)0x010d29a0 = (void*)0xc004b0;
    fn_0x00756000(g);
}
} }
