// FUNCTION: BF2 0x8b1e90
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b1e90() {
    void* g = (void*)0x10ed000;
    *(void**)0x010ed000 = (void*)0xbda350;
    fn_0x00756000(g);
}
} }
