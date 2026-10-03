// FUNCTION: BF2 0x8b32f0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b32f0() {
    void* g = (void*)0x10e8a20;
    *(void**)0x010e8a20 = (void*)0xbe0810;
    fn_0x00756000(g);
}
} }
