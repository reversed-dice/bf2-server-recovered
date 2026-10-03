// FUNCTION: BF2 0x8b3850
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b3850() {
    void* g = (void*)0x10e5780;
    *(void**)0x010e5780 = (void*)0xbe5130;
    fn_0x00756000(g);
}
} }
