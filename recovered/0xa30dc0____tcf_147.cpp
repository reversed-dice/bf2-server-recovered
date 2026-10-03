// FUNCTION: BF2 0xa30dc0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_a30dc0() {
    void* g = (void*)0x1118d00;
    *(void**)0x01118d00 = (void*)0xc5de30;
    fn_0x00756000(g);
}
} }
