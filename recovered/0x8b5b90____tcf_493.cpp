// FUNCTION: BF2 0x8b5b90
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b5b90() {
    void* g = (void*)0x10d0b40;
    *(void**)0x010d0b40 = (void*)0xc03090;
    fn_0x00756000(g);
}
} }
