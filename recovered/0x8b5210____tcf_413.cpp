// FUNCTION: BF2 0x8b5210
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b5210() {
    void* g = (void*)0x10d6540;
    *(void**)0x010d6540 = (void*)0xbfae90;
    fn_0x00756000(g);
}
} }
