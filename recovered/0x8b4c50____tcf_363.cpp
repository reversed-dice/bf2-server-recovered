// FUNCTION: BF2 0x8b4c50
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b4c50() {
    void* g = (void*)0x10d9d80;
    *(void**)0x010d9d80 = (void*)0xbf5d50;
    fn_0x00756000(g);
}
} }
