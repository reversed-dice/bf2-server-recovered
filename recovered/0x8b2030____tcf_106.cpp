// FUNCTION: BF2 0x8b2030
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b2030() {
    void* g = (void*)0x10ebf20;
    *(void**)0x010ebf20 = (void*)0xbdbbb0;
    fn_0x00756000(g);
}
} }
