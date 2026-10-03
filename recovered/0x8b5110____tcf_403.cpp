// FUNCTION: BF2 0x8b5110
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b5110() {
    void* g = (void*)0x10d7080;
    *(void**)0x010d7080 = (void*)0xbf9e50;
    fn_0x00756000(g);
}
} }
