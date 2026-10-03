// FUNCTION: BF2 0x8b5530
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b5530() {
    void* g = (void*)0x10d4800;
    *(void**)0x010d4800 = (void*)0xbfd8d0;
    fn_0x00756000(g);
}
} }
