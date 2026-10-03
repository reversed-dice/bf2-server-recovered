// FUNCTION: BF2 0x8a0b10
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8a0b10() {
    void* g = (void*)0x10c2a60;
    *(void**)0x010c2a60 = (void*)0xbd2510;
    fn_0x00756000(g);
}
} }
