// FUNCTION: BF2 0x8a0b90
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8a0b90() {
    void* g = (void*)0x10c3c60;
    *(void**)0x010c3c60 = (void*)0xbd0910;
    fn_0x00756000(g);
}
} }
