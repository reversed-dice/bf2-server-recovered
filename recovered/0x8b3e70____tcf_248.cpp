// FUNCTION: BF2 0x8b3e70
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b3e70() {
    void* g = (void*)0x10e1f00;
    *(void**)0x010e1f00 = (void*)0xbea270;
    fn_0x00756000(g);
}
} }
