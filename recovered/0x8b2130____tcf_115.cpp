// FUNCTION: BF2 0x8b2130
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b2130() {
    void* g = (void*)0x10eb500;
    *(void**)0x010eb500 = (void*)0xbdca50;
    fn_0x00756000(g);
}
} }
