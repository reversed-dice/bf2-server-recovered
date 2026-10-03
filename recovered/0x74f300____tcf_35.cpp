// FUNCTION: BF2 0x74f300
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_74f300() {
    void* g = (void*)0x10ac460;
    *(void**)0x010ac460 = (void*)0xb9ccb0;
    fn_0x00756000(g);
}
} }
