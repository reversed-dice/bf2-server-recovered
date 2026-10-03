// FUNCTION: BF2 0x8b3c50
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b3c50() {
    void* g = (void*)0x10e3340;
    *(void**)0x010e3340 = (void*)0xbe8530;
    fn_0x00756000(g);
}
} }
