// FUNCTION: BF2 0x8b5cd0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b5cd0() {
    void* g = (void*)0x10d0000;
    *(void**)0x010d0000 = (void*)0xc040d0;
    fn_0x00756000(g);
}
} }
