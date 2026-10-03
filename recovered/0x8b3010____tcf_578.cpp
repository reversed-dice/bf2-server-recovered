// FUNCTION: BF2 0x8b3010
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b3010() {
    void* g = (void*)0x10caba0;
    *(void**)0x010caba0 = (void*)0xc0bab0;
    fn_0x00756000(g);
}
} }
