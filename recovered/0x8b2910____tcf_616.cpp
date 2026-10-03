// FUNCTION: BF2 0x8b2910
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b2910() {
    void* g = (void*)0x10c80e0;
    *(void**)0x010c80e0 = (void*)0xc0f870;
    fn_0x00756000(g);
}
} }
