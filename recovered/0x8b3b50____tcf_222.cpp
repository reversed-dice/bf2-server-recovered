// FUNCTION: BF2 0x8b3b50
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b3b50() {
    void* g = (void*)0x10e3c80;
    *(void**)0x010e3c80 = (void*)0xbe7830;
    fn_0x00756000(g);
}
} }
