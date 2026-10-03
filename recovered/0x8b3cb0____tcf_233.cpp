// FUNCTION: BF2 0x8b3cb0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b3cb0() {
    void* g = (void*)0x10e2fe0;
    *(void**)0x010e2fe0 = (void*)0xbe8a10;
    fn_0x00756000(g);
}
} }
