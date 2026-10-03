// FUNCTION: BF2 0x8b2f30
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b2f30() {
    void* g = (void*)0x10cb380;
    *(void**)0x010cb380 = (void*)0xc0af50;
    fn_0x00756000(g);
}
} }
