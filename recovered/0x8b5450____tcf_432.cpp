// FUNCTION: BF2 0x8b5450
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b5450() {
    void* g = (void*)0x10d4fe0;
    *(void**)0x010d4fe0 = (void*)0xbfcd70;
    fn_0x00756000(g);
}
} }
