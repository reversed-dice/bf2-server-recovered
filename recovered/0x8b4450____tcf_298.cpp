// FUNCTION: BF2 0x8b4450
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b4450() {
    void* g = (void*)0x10de6a0;
    *(void**)0x010de6a0 = (void*)0xbef3b0;
    fn_0x00756000(g);
}
} }
