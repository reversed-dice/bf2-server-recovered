// FUNCTION: BF2 0x8b54b0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b54b0() {
    void* g = (void*)0x10d4c80;
    *(void**)0x010d4c80 = (void*)0xbfd250;
    fn_0x00756000(g);
}
} }
