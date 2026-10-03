// FUNCTION: BF2 0x8b2fb0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b2fb0() {
    void* g = (void*)0x10caf00;
    *(void**)0x010caf00 = (void*)0xc0b5d0;
    fn_0x00756000(g);
}
} }
