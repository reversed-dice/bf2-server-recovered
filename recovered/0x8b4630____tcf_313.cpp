// FUNCTION: BF2 0x8b4630
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b4630() {
    void* g = (void*)0x10dd5c0;
    *(void**)0x010dd5c0 = (void*)0xbf0c10;
    fn_0x00756000(g);
}
} }
