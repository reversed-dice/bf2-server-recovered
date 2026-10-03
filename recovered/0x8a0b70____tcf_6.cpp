// FUNCTION: BF2 0x8a0b70
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8a0b70() {
    void* g = (void*)0x10c3d80;
    *(void**)0x010c3d80 = (void*)0xbd0750;
    fn_0x00756000(g);
}
} }
