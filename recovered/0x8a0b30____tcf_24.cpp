// FUNCTION: BF2 0x8a0b30
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8a0b30() {
    void* g = (void*)0x10c2940;
    *(void**)0x010c2940 = (void*)0xbd26d0;
    fn_0x00756000(g);
}
} }
